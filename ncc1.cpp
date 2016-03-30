#include <bits/stdc++.h>
using namespace std;
int main() 
{
int n;
scanf("%d",&n);
while(n--)
{
	string s;
	cin>>s;
	int k=0;
	int c=0;
	int l=s.length();
	int j=l-1;
int i=0;
int flag2=0;
	vector<int>v;
	while(k<l)
	{
		int flag=0;
		j=l-1;
		i=k;
		c=0;
		while(true)
		{
		if(s[i]==s[j]&&i!=j)
		{

		c+=2;
		i++;
		}
		else
		{	
		c=0;
        i=k;
        
	    }
    	//cout<<" "<<c<<endl;
		if(i>=j)
		{
		flag=1;
		break;
		}
		j--;
		if(i==j)
		{
			c++;
			break;
		}
	}
		// /cout<<c<<endl;
		v.push_back(c);
	k++;
	}
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
cout<<*max_element(v.begin(),v.end());

}
	return 0;
}
