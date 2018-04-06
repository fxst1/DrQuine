;Comment
BITS 32
extern printf
global main
section .data
buffer: db ';Comment%2$cBITS 32%2$cextern printf%2$cglobal main%2$csection .data%2$cbuffer: db %3$c%s%3$c,0x0%2$csection .text%2$cmain:%2$c;Comment%2$cpush ebp%2$cmov ebp, esp%2$cpush 0x27%2$cpush 0xa%2$cpush buffer%2$cpush buffer%2$ccall printf%2$cadd esp, 16%2$cleave%2$cret%2$c',0x0
section .text
main:
;Comment
push ebp
mov ebp, esp
push 0x27
push 0xa
push buffer
push buffer
call printf
add esp, 16
leave
ret
