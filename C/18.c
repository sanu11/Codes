#include<stdio.h>
int main()
{
char i='\0';
for((i+=512)&&(i<=520);i++;i>0)
printf("%d\n",i);
	return 0;
}
//infinte loop
//No Output
//Syntax error
//513 514 515 516 ... 521