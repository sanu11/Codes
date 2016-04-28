#include<stdio.h>
int a=10;
void fun()
{
int a=20;
printf(" in func%d\n",::a);
a=40;
}
int main()
{
	extern int a;
	printf("%d",a);

	a=30;
	
	printf("%d",a);
	fun();
printf("%d",a);
	
	return 0;
}
