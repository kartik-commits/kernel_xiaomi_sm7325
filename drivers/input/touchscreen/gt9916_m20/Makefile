obj-$(CONFIG_TOUCHSCREEN_GOODIX_BRL) += goodix_core.o
goodix_core-y := \
				goodix_ts_core.o \
				goodix_brl_hw.o \
				goodix_cfg_bin.o \
				goodix_ts_utils.o \
				goodix_brl_fwupdate.o \
				goodix_ts_gesture.o

ifdef CONFIG_TOUCHSCREEN_GOODIX_BRL_SPI
goodix_core-y += goodix_brl_spi.o
else
goodix_core-y += goodix_brl_i2c.o
endif
