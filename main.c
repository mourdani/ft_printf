#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a,b,c,d,e,f = 0;

	ft_printf("char : a = %c, z =%c , \" = %c\n", 'a','z','\"');
	ft_printf("string : %s\n", "this Is A Test text    .!!??");
	ft_printf("number : %d and %i\n", -9, -9);
	ft_printf("unumber : %u\n", -2);
	ft_printf("number in hex : %x and %X\n", 144547, 144547);
	ft_printf("percent : %% \n");
	ft_printf("pointer : a= %p, b= %p, c= %p,d= %p,e= %p,f = %p\n", &a, &b, &c, &d, &e, &f);
	printf("pointer : a= %p, b= %p, c= %p,d= %p,e= %p,f = %p\n", &a, &b, &c, &d, &e, &f);
	ft_putstr("Finished!!");
	return 0;
}
