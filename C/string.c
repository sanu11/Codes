#include<stdio.h>
int main()
{
char *p="hello";
printf("%u\n",p);
printf("---%c---",*(p+1));
 
p="bye";
printf("%u\n",p);


char d[]={"sanika"};
d[2]="s";
char *e=d;
printf("%s\n",e);
e[2]='d';
printf("%s\n",e);

//pointer to constant value
const char *a;
a=d;
a[2]="s";
printf("%u  %s\n",a,a);
a="byeee";

printf("%u  %s\n",a,a);

//const pointer .. cannot be chnaged;
char* const b="world";
printf("%u  %s\n",b,b);
// b="byeee";
// printf("%u  %s\n",b,b);
return 0;
}