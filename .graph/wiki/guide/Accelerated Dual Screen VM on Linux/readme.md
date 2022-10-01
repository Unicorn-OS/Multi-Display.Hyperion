https://www.modio.se/accelerated-dual-screen-vm-on-linux.html

# keep.Works!
>Boot again
>Once again, start your VM, then use virt-viewer -a to connect to it. Wait until it's started and log in normally.
>
>In virt-viewer in the "View" menu, in the submenu "Displays", click to enable the checkbox for "Display 2". That should make the guest VM see a new display attached, and after a few seconds, it will configure and show things on it.
>
>At this point, a Fedora 31 Guest behaves a lot smoother than a Debian 10 Guest. Where Fedora 31 has almost no graphical glitches and seems to work smoothly the whole way, Debian 10 takes some time, and sometimes corrupts the graphics on one or two of the displays. If they go dark, or corrupt, resize the window slightly, and press the "super" key when one of them is focused. This should make the UI inside the guest VM redraw, and will get graphics to show.

