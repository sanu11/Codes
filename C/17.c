#include<stdio.h>
int main()
{
char (*b)[4];	
char *a[3]={"Elephant","Lions","Tiger","Cheetah"};
b=a[1];	
b++;
char *f=b;
f+=4;
printf("%s\n",f);
}
//Tiger
//iger
//ger
//r