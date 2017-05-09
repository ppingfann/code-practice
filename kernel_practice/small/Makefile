obj-m := test.o
CURRENT_PATH := $(shell pwd)
LINUX_PATH := $(shell uname -r)
LINUX_KERNEL_PATH := /usr/src/kernels/$(LINUX_PATH)

all:
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) modules
clean:
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) clean
