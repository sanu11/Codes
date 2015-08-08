#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int fun(string s1,string s2)
{
int i=0,c=0,a=-1;
while(i<s1.length())
{
while(s1[i]=='.')
{
if(a==1)
c++;
i++;
a=0;
}
while(s2[i]=='.')
{
	if(a==0)
	c++;
i++;
a=1;
}
if(s1[i]=='#'&&s2[i]=='#')
break;
}
if(i==s1.length())
return c;
else 
return -1;
}
 
int main()
{
int t;
cin>>t;
while(t--)
{
string s1,s2;
cin>>s1;
cin>>s2;
int re,re1;
re=fun(s1,s2);
re1=fun(s2,s1);
if(re1!=-1&&re1!=-1)
cout<<"Yes\n"<<min(re,re1)<<"\n";
else if(re!=-1)
cout<<"Yes\n"<<re<<"\n";
else if(re1!=-1)
cout<<"Yes\n"<<re1<<"\n";
else 
cout<<"No\n";
}
return 0;
} 
