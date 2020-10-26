#include "holberton.h"

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int alen, elen;
	char c = 'z';
	char longstr[2000];
	int i;
	char *str = NULL;

	for (i = 0; i < 1999 ; i++)
		longstr[i] = 67 + (i % 10);
	longstr[i] = '\0';

	len = _printf(0);
	len2 = printf(0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%s\n", 0);
	len2 = printf("%s\n", 0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%s\n", str);
	len2 = printf("%s\n", str);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%c\n", 0);
	len2 = printf("%c\n", 0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%c\n", str);
	len2 = printf("%c\n", str);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);



//	len = _printf("%s\n", longstr);
//	len2 = printf("%s\n", longstr);
//	printf("Len _printf = %i\n", len);
//	printf("len printf = %i\n", len2);

/*	len = _printf("%o\n", -1);
	len2 = printf("%o\n", -1);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%o\n", 0);
	len2 = printf("%o\n", 0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%o\n", INT_MAX);
	len2 = printf("%o\n", INT_MAX);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%o\n", INT_MIN);
	len2 = printf("%o\n", INT_MIN);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%u\n", -1);
	len2 = printf("%u\n", -1);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%u\n", 0);
	len2 = printf("%u\n", 0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%u\n", INT_MAX);
	len2 = printf("%u\n", INT_MAX);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%u\n", INT_MIN);
	len2 = printf("%u\n", INT_MIN);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);


	len = _printf("%i\n", -1);
	len2 = printf("%i\n", -1);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%i\n", 0);
	len2 = printf("%i\n", 0);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%i\n", INT_MAX);
	len2 = printf("%i\n", INT_MAX);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);

	len = _printf("%i\n", INT_MIN);
	len2 = printf("%i\n", INT_MIN);
	printf("Len _printf = %i\n", len);
	printf("len printf = %i\n", len2);
*/




/*	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	printf("Expected: %c%c%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", "hol");
	_printf("Actual  : %c%c%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", "hol");

	printf("Expected: %c%c%s%c%s%s%s\n", 't', 'u', "hello", 't', "holberton", "hol", "ma");
	_printf("Actual  : %c%c%s%c%s%s%s\n", 't', 'u', "hello", 't', "holberton", "hol", "ma");



	printf("START OF TEST\n");
	printf("=====================\n");
//	printf("printf(NULL)  : %d\n", _printf(str));
//	printf("_printf(NULL) : %d\n", _printf(str));
	printf("printf() : %d\n", printf("%%"));
	printf("_printf(): %d\n", _printf("%"));
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	elen = printf("%s", "");
	alen = _printf("%s", "");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", "hol");
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", "hol");
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen); */



	return (0);
}
