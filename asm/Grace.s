;
;	Comment
;
BITS 32
extern fopen
extern fprintf
extern fclose
global main
%define DEF1
%define DEF2
section .data
dest: db 'Grace_kid.s',0x0
perm: db 'w',0x0
buffer: db ';%2$c;	Comment%2$c;%2$cBITS 32%2$cextern fopen%2$cextern fprintf%2$cextern fclose%2$cglobal main%2$c%%define DEF1%2$c%%define DEF2%2$csection .data%2$cdest: db %3$cGrace_kid.s%3$c,0x0%2$cperm: db %3$cw%3$c,0x0%2$cbuffer: db %3$c%1$s%3$c,0x0%2$csection .text%2$c%%macro ft 1%2$cmain:%2$cpush ebp%2$cmov ebp, esp%2$cpush perm%2$cpush dest%2$ccall fopen%2$cadd esp, 8%2$ccmp eax, 0x0%2$cje end%2$cmov ebx, eax%2$cpush 0x27%2$cpush 0xa%2$cpush buffer%2$cpush buffer%2$cpush ebx%2$ccall fprintf%2$cadd esp, 20%2$cpush ebx%2$ccall fclose%2$cend:%2$cleave%2$cret%2$c%%endmacro%2$cft(1)%2$c',0x0
section .text
%macro ft 1
main:
push ebp
mov ebp, esp
push perm
push dest
call fopen
add esp, 8
cmp eax, 0x0
je end
mov ebx, eax
push 0x27
push 0xa
push buffer
push buffer
push ebx
call fprintf
add esp, 20
push ebx
call fclose
end:
leave
ret
%endmacro
ft(1)
