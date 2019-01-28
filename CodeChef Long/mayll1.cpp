#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,act,rank,sev;
long long laddu;
string origin,type;
cin>>t;
while(t--)
{
laddu=0;
cin>>act>>origin;
while(act--)
{
cin>>type;
if(type=="CONTEST_WON")
{
	cin>>rank;
	laddu+=300;
	if(rank<=20)
		laddu+=20-rank;
}
else if(type=="TOP_CONTRIBUTOR")
	laddu+=300;
else if(type=="BUG_FOUND")
{

	cin>>sev;
	laddu+=sev;
}
else if(type=="CONTEST_HOSTED")
laddu+=50;
}
if(origin=="INDIAN")
cout<<laddu/200<<endl;
else
	cout<<laddu/400<<endl;
}
	return 0;
}