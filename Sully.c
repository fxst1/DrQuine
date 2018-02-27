#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
int i = 5;
char buffer[2048];
if (i <= 0)
return (0);
sprintf(buffer, "Sully_%d.c", i);
FILE *in = fopen(buffer, "w");
char *code = "#include <stdio.h>%4$c#include <string.h>%4$c#include <stdlib.h>%4$cint main(){%4$cint i = %2$d;%4$cchar buffer[2048];%4$cif (i <= 0)%4$creturn (0);%4$csprintf(buffer, %3$cSully_%%d.c%3$c, i);%4$cFILE *in = fopen(buffer, %3$cw%3$c);%4$cchar *code = %3$c%1$s%3$c;%4$ci--;%4$cfprintf(in, code, code, i, 34, 10);%4$ci++;%4$cfclose(in);%4$csprintf(buffer, %3$ccc -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c; ./Sully_%%d%3$c, i, i, i);%4$csystem(buffer);%4$creturn (0);%4$c}%4$c";
i--;
fprintf(in, code, code, i, 34, 10);
i++;
fclose(in);
sprintf(buffer, "cc -Wall -Wextra -Werror -o Sully_%d Sully_%d.c; ./Sully_%d", i, i, i);
system(buffer);
return (0);
}
