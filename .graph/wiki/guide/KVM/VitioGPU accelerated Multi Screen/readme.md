This should be an easy "Feauter" To create in the Virt-Manager source code! Just need one more input box with `number of monitors`

# keep.Works!
## xml:
domain.xml

change: `heads="{number}"

```
<video>
  <model type="virtio" heads="3" primary="yes">
    <acceleration accel3d="yes"/>
  </model>
  <address type="pci" domain="0x0000" bus="0x00" slot="0x01" function="0x0"/>
</video>
```

## Guide:
https://www.modio.se/accelerated-dual-screen-vm-on-linux.html
ark| https://web.archive.org/web/20241012152958/https://www.modio.se/accelerated-dual-screen-vm-on-linux.html

>Boot again
>Once again, start your VM, then use virt-viewer -a to connect to it. Wait until it's started and log in normally.
>
>In virt-viewer in the "View" menu, in the submenu "Displays", click to enable the checkbox for "Display 2". That should make the guest VM see a new display attached, and after a few seconds, it will configure and show things on it.
>
>At this point, a Fedora 31 Guest behaves a lot smoother than a Debian 10 Guest. Where Fedora 31 has almost no graphical glitches and seems to work smoothly the whole way, Debian 10 takes some time, and sometimes corrupts the graphics on one or two of the displays. If they go dark, or corrupt, resize the window slightly, and press the "super" key when one of them is focused. This should make the UI inside the guest VM redraw, and will get graphics to show.

---
>Configuring dual screen
>Open virt-manager again, and make sure your VM is shut off neatly. Then go to "Edit=>Preferences" for the whole virt-manager, and under the "General" tab, pick "Enable XML Editing" and then close the preferences again.
>
>In virt-manager
>Select your VM and Open the Details view
>Go down to your Video Virtio device
>Pick the "XML" tab
>Change the text that reads `heads="1"` to read `heads="2"`
>Make sure you do no other changes, and save.
