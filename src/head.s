.extern main
.extern stage1
.extern stage2


.equ    SDRAM_BASE,    0x30000000
.equ    STACK_BASE,    SDRAM_BASE + 64*1024*1024 @64MB

.text
.global _start


_start:
    ldr sp,=STACK_BASE
    bl stage1
    bl stage2
    bl main
    
halt_loop:
    b halt_loop 
