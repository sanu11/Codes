#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6};
int *p=a;
printf("%d\n",*(p+2));
int **q=&p;
printf("%d\n", *(*q+2));
return 0;
}