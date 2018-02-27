#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
int i = 1;
if (i <= 0)
return(0);
char buff[5000];
sprintf(buff, "Sully_%d.c", i);
FILE *f = fopen(buff, "w");
i--;
char*a="#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$cint main(){%1$cint i = %4$d;%1$cif (i <= 0)%1$creturn(0);%1$cchar buff[5000];%1$csprintf(buff, %2$cSully_%%d.c%2$c, i);%1$cFILE *f = fopen(buff, %2$cw%2$c);%1$ci--;%1$cchar*a=%2$c%3$s%2$c;%1$cfprintf(f, a, 10, 34, a, i);%1$cfclose(f);%1$cchar buff2[5000];%1$csprintf(buff2, %2$ccc -Wall -Wextra -Werror -o %%.*s %%s%2$c, (int)strlen(buff)-2, buff, buff);%1$csystem(buff2);%1$csprintf(buff2, %2$c./%%.*s%2$c, (int)strlen(buff)-2, buff);%1$csystem(buff2);%1$c}%1$c";
fprintf(f, a, 10, 34, a, i);
fclose(f);
char buff2[5000];
sprintf(buff2, "cc -Wall -Wextra -Werror -o %.*s %s", (int)strlen(buff)-2, buff, buff);
system(buff2);
sprintf(buff2, "./%.*s", (int)strlen(buff)-2, buff);
system(buff2);
}
