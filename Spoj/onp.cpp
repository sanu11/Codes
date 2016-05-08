#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int top;
void push(char a)
{
v.push_back(a);
}
char pop()
{
char x;
x=v[v.size()-1];
v.erase(v.end()-1);
return x;
}

int notempty()
{
if(v.size()!=0)
	return 1;
return 0;

}
int main()
{
int t;
cin>>t;
char c,y;
string s;
while(t--)
{
cin>>s;
int len=s.length();
for(int i=0;i<len;i++)
{
if(s[i]<97 && s[i]!=')')
	push(s[i]);
else if(s[i]==')')
{
while((y=pop())!='(')
	cout<<y;
}
else
cout<<s[i];
}	
while(notempty())
{
y=pop();
if(y!='(')
cout<<y;
}
cout<<endl;
} 
return 0;
}