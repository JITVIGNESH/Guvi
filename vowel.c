#include <stdio.h>

int main(void) 
{
char chr;
scanf("%c",&chr);
switch(chr)
{
case 'a':
	printf("Vowel");
	break;
case 'e':
	printf("Vowel");
	break;
case 'i':
	printf("Vowel");
	break;
case 'o':
	printf("Vowel");
	break;
case 'u':
	printf("Vowel");
	break;
default:
		if( (chr>='a' && chr<='z') || (chr>='A' && chr<='Z'))
		{
			printf("Consonant");
		}
		else
		{
			printf("invalid");
		}
		break;
}
}
