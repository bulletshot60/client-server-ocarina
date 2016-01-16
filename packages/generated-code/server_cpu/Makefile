export ARCH=x86
export BSP=x86-qemu
export POK_CONFIG_OPTIMIZE_FOR_GENERATED_CODE=1
include $(POK_PATH)/misc/mk/config.mk
include $(POK_PATH)/misc/mk/common-$(ARCH).mk
TARGET=$(shell pwd)/pok.elf
PARTITIONS=

KERNEL=kernel/kernel.lo
all: build-kernel partitions $(TARGET)
build-kernel:
	$(CD) kernel && $(MAKE)

partitions:


clean: common-clean


distclean: clean


include $(POK_PATH)/misc/mk/rules-common.mk
include $(POK_PATH)/misc/mk/rules-main.mk
include $(POK_PATH)/misc/mk/install-rules.mk
