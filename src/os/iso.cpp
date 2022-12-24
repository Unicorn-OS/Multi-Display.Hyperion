#include "iso.h"

#include "../uni/mkdirs.h"

using namespace std;

void linkFedora()
{
    string image, folder, from, to;

    folder = "Fedora-Workstation-Live-x86_64-37";
    image = "Fedora-Workstation-Live-x86_64-37-1.7.iso";
    from = getUni() + "/os/dl/" + folder+ "/" + image;
    to = getUni() + "/os/iso/" + image;

    createLink(from, to);
}

void linkUbuntu(){
    string image, from, to;

    image = "ubuntu-22.10-desktop-amd64.iso";
    from = getUni() + "/os/dl/" + image;
    to = getUni() + "/os/iso/" + image;

    createLink(from, to);
}
