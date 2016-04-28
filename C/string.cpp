#include<stdio.h>
#include<iostream>
int main()
{

char *p="hello";
printf("%u\n",p);
printf("---%c---",*(p+1));
//*(p+1)='s';
p="bye";
printf("%u\n",p);

char d[]={"sanika"};
char *e=d;
printf("%s\n",e);
e[2]='d';
printf("%s\n",e);

//pointer to constant value
const char *a="hiiieee";
printf("%u  %s\n",a,a);
a="byeee";
printf("%u  %s\n",a,a);

//const pointer .. cannot be chnaged;
char* const b="world";
printf("%u  %s\n",b,b);
// b="byeee";
// pri	ntf("%u  %s\n",b,b);	
std::cout<<"\n";
std::cout<<sizeof(std::cout);
return 0;
}