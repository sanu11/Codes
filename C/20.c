#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("%s %c %s \n",*argv,*(*argv++),*++argv);
}
//./a.out . Life
//Life C College 
//Life L College
//./a.out C Life