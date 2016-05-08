#include<stdio.h>
int x;
void fun()
{
++x;

}
void main()
{
	int x=10;
	f1();
x= ::x+10;
printf("%d\n", x);
}
