#include<stdio.h>
#define sq(x) x*x
int main()
{
int sum,i=3;
//sum=++i + ++i+ ++i;
//i=i++ + i++ + i++;
//sum=sq(++i + ++i);
sum=++i*++i;
printf("%d",sum);
//printf("%d",i);
}


