all: a.s b.c
	arm-linux-gcc -c -o head.o head.s
	arm-linux-ld -Ttext 0x30000000 head.o sdram.o -o sdram_tmp.o
	arm-linux-objcopy -O binary -S sdram_tmp.o sdram
	#arm-linux-objdump -D -b binary -m arm link>ttt.s
clean:
	rm -f *.o
