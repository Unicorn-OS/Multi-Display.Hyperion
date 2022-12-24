/* From: https://gist.github.com/hrlou/cd440c181df5f4f2d0b61b80ca13516b
*/
#include <iostream>
#include <string>

#include <sys/stat.h>
#ifdef _WIN32
#include <direct.h>
#define MKDIR(PATH) ::_mkdir(PATH)
#else
#define MKDIR(PATH) ::mkdir(PATH, 0755)
#endif

static bool do_mkdir(const std::string& path) {
    struct stat st;
    if (::stat(path.c_str(), &st) != 0) {
        if (MKDIR(path.c_str()) != 0 && errno != EEXIST) {
            return false;
        }
    } else if (!S_ISDIR(st.st_mode)) {
        errno = ENOTDIR;
        return false;
    }
    return true;
}

bool mkpath(std::string path) {
    std::string build;
    for (size_t pos = 0; (pos = path.find('/')) != std::string::npos;) {
        build += path.substr(0, pos + 1);
        do_mkdir(build);
        path.erase(0, pos + 1);
    }
    if (!path.empty()) {
        build += path;
        do_mkdir(build);
    }
    return true;
}

void _test(){
    std::string test = "/home/me/.uni/test";
    mkpath(test);
}
