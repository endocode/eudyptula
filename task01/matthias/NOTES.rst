Matthias' solution
------------------

* Build the module against the running kernel
::

  $ make
  make -C /lib/modules/4.12.0-rc4-00122-gb29794e/build M=/home/dest/git/endocode-eudyptula/task01/matthias
  make[1]: Entering directory '/home/dest/git/linux'
    LD      /home/dest/git/endocode-eudyptula/task01/matthias/built-in.o
    CC [M]  /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.o
    Building modules, stage 2.
    MODPOST 1 modules
    CC      /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.mod.o
    LD [M]  /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.ko
  make[1]: Leaving directory '/home/dest/git/linux'

* Loading / unloading the module

::

 $ sudo insmod hello_eudyptula.ko
  $ dmesg | grep Hello
  [ 6173.950161] Hello World!
  $ sudo rmmod hello_eudyptula
  $ dmesg | grep Good
  [ 6181.566417] Goodbye World.

* Building the module against another kernel source directory:

::

  $ export KERNEL_SRC_DIR=/home/dest/git/linux
   $ make
    make -C /home/dest/git/linux/ M=/home/dest/git/endocode-eudyptula/task01/matthias
    make[1]: Entering directory '/home/dest/git/linux'
      LD      /home/dest/git/endocode-eudyptula/task01/matthias/built-in.o
      CC [M]  /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.o
      Building modules, stage 2.
      MODPOST 1 modules
      CC      /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.mod.o
      LD [M]  /home/dest/git/endocode-eudyptula/task01/matthias/hello_eudyptula.ko
    make[1]: Leaving directory '/home/dest/git/linux'
