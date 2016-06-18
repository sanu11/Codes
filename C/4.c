#include <stdio.h>
fun(int,int,int);
int main(void)
{
int a=10,b=50,c=60;
int x=fun(a,b,c);
switch(x)
{
	printf("HI");
	case 61:
	printf("I");
	break;
	case 62:
	printf("N");
	break;
	case 71 :
	printf("C");
	break;
	default :
	printf("Default");
}
return 0;
}
fun(int x,int y,int z)
{
	return (z>=y>=x?++x + ++y : x++ + ++z);
}

