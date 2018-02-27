#include<stdio.h>
/*
	Comment
*/
int test();
int main()
{
	/*
		Comment
	*/
	char	*buffer = "#include<stdio.h>%3$c/*%3$c%2$cComment%3$c*/%3$cint test();%3$cint main()%3$c{%3$c%2$c/*%3$c%2$c%2$cComment%3$c%2$c*/%3$c%2$cchar%2$c*buffer = %4$c%1$s%4$c;%3$c%2$cprintf(buffer, buffer, 9, 10, 34);%3$c}%3$c";
	printf(buffer, buffer, 9, 10, 34);
}
