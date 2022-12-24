#include <iostream>
#include "uni/mkdirs.h"
#include "os/iso.h"

using namespace std;

int main()
{
    makeUni();
    linkFedora();
    linkUbuntu();

    cout << "Hello world!" << endl;
    return 0;
}
