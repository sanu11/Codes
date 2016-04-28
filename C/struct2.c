#include<stdio.h>
#include<string.h>
#define L 10
void main()
{
struct emp
{
    char name[3];
};
struct  emp e1={"hello"};
struct  emp e2=e1;
e1.name[2]='s';
printf("%s\n",e1.name );    
}