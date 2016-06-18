#include <stdio.h>

int main() 
{
	char a[6],b[6],c[5];
	scanf("%3s",&a);
	scanf("%6s",&b);
	scanf("%3s",&c);
	if(printf("%s ",b)<=2)
		printf("%d",strlen(c));
	else
		printf("%d",strlen(a));
	return 0;
}
//input given is Welcome to college

