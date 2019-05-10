/*
	Recitation 1 - CSCE 3600
	Zach Friedman - zmf0010
*/

#include <stdio.h>

int main()
{
	//user given character
	unsigned char usrChar;
	//index varaible for loop
	int i;

	//prompt the user for a character
	printf("\n Enter an ASCII character: ");
	scanf("%c", &usrChar);

	printf("The ASCII value of %c is: ", usrChar);

	//return the decimal value of usrChar
	printf("\ndec -- %d\n", usrChar);
	//return the hexadecimal value of usrChar
	printf("hex -- %x\n", usrChar);
	printf("bin -- ");

	//bit manipulation to obtain binary value
	for(i = 7; i >= 0; i--)
	{
		printf("%d", (usrChar >> i) & 1);
	}
	printf("\n");

	return 0;
}

