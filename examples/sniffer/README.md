Sniffer 15.4
============

This example is a contiki-based 802.15.4 sniffer application.
To program a Contiki-compatible mote as a 802.15.4:

* Make sure you have a proper toolchain set up for your target device. For more info, refer to Step 1 of [the official Contiki documentation](https://github.com/contiki-os/contiki/wiki/Setup-contiki-toolchain-in-ubuntu-13.04).
* Download the source:
<pre>git clone https://github.com/cetic/contiki
cd contiki
git checkout sniffer</pre>
* Connect your sniffer device
* Build & Upload the application
<pre>cd examples/sniffer
make TARGET=your_target sniffer.upload</pre>
    * example:
<pre>make TARGET=sky sniffer.upload</pre>
