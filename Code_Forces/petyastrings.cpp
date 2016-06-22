#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.length();
	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	
	int i=0;
	while(true)
	{

		if(s1[i]>s2[i])
		{
			cout<<"1\n";
			break;
		}	
		else if(s1[i]<s2[i])
		{

			cout<<"-1\n";
			break;
		}
		else
			i++;
		if(i==n)
		{
			cout<<"0\n";
		break;
		}
	}

	return 0;
}