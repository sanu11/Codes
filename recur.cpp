#include<bits/stdc++.h>
using namespace std;
int i=0;
int rec(int temp)
{
if(temp>=10||temp<=0)
return 0;	
cout<<i<<endl;	
rec(temp+i);
rec(temp-i);
i++;
}
int main()
{
int s;
cin>>s;	
rec(s);	
	//  cout<<v.size()<<endl;
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<endl;
	// 	return 0;
}