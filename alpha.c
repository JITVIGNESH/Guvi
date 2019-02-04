#include <stdio.h>

int main(void) 
{
char chr;
scanf("%c",&chr);
		if( (chr>='a' && chr<='z') || (chr>='A' && chr<='Z'))
		{
			printf("Alphabet");
		}
		else
		{
			printf("No");
		}
}
