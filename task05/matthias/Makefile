obj-m += hello_eudyptula.o

# See https://www.kernel.org/doc/Documentation/kbuild/modules.txt 

# Set KERNEL_SRC_DIR to the headers path of the running kernel
# if the variable is not already set in the environment
KERNEL_SRC_DIR ?= /lib/modules/$(shell uname -r)/build

all:
	make -C $(KERNEL_SRC_DIR) M=$(PWD)
clean:
	make -C $(KERNEL_SRC_DIR) M=$(PWD) clean

load:
	sudo rmmod  hello_eudyptula
	sudo insmod hello_eudyptula.ko
