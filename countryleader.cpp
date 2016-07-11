#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string x;
	int count=0,main=0;;
	int mx=0,len=0;
	string temp;
	int alpha[26];
	int diff=0;
	std::vector<string> v;
	int o=t;
	
	while(t--)
	{
		cin>>n;
		v.clear();
		n+=1;
		mx=0;
		while(n--)
		{
			// cout<<n<<endl;
			getline(cin,x);
			memset(alpha,0,sizeof(alpha));
			main=0;
			count=0;
			
			len=x.length();
			for(int i=0;i<len;i++)
			{
				if(isalpha(x[i]))
				{
					alpha[x[i]-65]++;
					if(alpha[x[i]-65]>1)
						count++;
					main++;
				}
			}
			diff=main-count;
			// cout<<main<<" "<<count<<endl;
			if(diff>mx)
			{
				mx=diff;
				temp=x;
				v.clear();
				v.push_back(x);
			}
			else if(diff==mx)
			{
				v.push_back(x);
			}
		// for(int i=0;i<v.size();i++)
		// 	cout<<v[i]<<" ";
		}

		sort(v.begin(),v.end());
		cout<<"Case #"<<o-t<<": ";
		cout<<v[0]<<endl;

	}


return 0;
}