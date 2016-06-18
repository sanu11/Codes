#include<stdio.h>
int main()
{
char (*temp)[4];
char a[]="%google.com%olacab%d%%%cab";
temp=strstr(a,"cab");
temp--;
int x=10;
char z='ABC';
char str[10]="";
strcpy(str,temp);
printf(str,x,z,z);
brk(0);
}
//12lacab67%Cab
//acab10%Aab
//acab10%%Cab
//10lacab67%Cab