# Multi-Display.Hyperion virtual machine

## KVM & Virtio GPU
code: `virt-viewer -a` , Guide: https://www.modio.se/accelerated-dual-screen-vm-on-linux.html , sch: https://www.google.com/search?q=virt-manager+multiple+displays

run detached:
`virt-viewer -a &`

or run in screen session:
```screen -S dual
virt-viewer -a```


Change in the xml from: `heads="1"` to `heads="2"`
