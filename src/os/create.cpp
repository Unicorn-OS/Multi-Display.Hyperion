#include <iostream>
#include <fstream>
#include <filesystem>
#include "iso.h"


namespace fs = std::filesystem;
using namespace std;

void createLink(string from, string to){
//    Safely create a Symlink! remove if a file exists here.

    if(fs::exists(to) && !fs::is_symlink(to)){
        fs::remove(to);
    }

    if(!fs::exists(to)){
        fs::create_symlink(from, to);
    }
}
