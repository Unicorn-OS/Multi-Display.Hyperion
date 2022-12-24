#include "mkdirs.h"
#include "../lib/mkpath/mkpath.h"
#include <iostream>

using namespace std;

void makeUni(){
    string dirs[5] = {"app", "os/dl", "os/iso", "hyperion", "src"};

    string prefix = ".uni";

    for (string dir : dirs){
        makeDir(prefix, dir);
    }
}

string getHome(){
    return getenv("HOME");
}

string getUni(){
    return getHome() + "/.uni";
}

void makeDir(string prefix, string dir){
    string path = getHome() + "/" + prefix +"/" + dir;
    cout << path << endl;
    mkpath(path);
}
