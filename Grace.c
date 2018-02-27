#include <stdio.h>

/*
	Comment I
*/

#define DEST "Grace_kid.c"
#define SRC __FILE__
#define FT(x) int main() {FILE* in = fopen(DEST, "w"); char *buffer = "#include <stdio.h>%3$c%3$c/*%3$c%2$cComment I%3$c*/%3$c%3$c#define DEST %4$cGrace_kid.c%4$c%3$c#define SRC __FILE__%3$c#define FT(x) int main() {FILE* in = fopen(DEST, %4$cw%4$c); char *buffer = %4$c%1$s%4$c; fprintf(in, buffer, buffer, 9, 10, 34); fclose(in);}%3$cFT(1);%3$c"; fprintf(in, buffer, buffer, 9, 10, 34); fclose(in);}
FT(1);
