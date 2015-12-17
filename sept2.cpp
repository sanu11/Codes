#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;
	cin>>k;
	vector<char*>v(k);
	for(int i=0;i<k;i++)
	{	
	v[i]=new char[100];	
	cin>>v[i];
	}
	cin>>n; 
	string a;
	cin>>a;
	locale loc;
	char *s;
	s=strtok(&a[0]," ");
	while(s!=NULL)
	{
	for(int i=0;i<k;i++)
	if(strstr(s,v[i])==NULL)
	cout<<toupper(s[0],loc)<<"."<<endl;
	s=strtok(NULL," ");	
	cout<<s;		
	}
    return 0;
}

