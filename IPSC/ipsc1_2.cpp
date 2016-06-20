#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
	 	string s[10];
	 	int c[2];
	 	int flag=0;

	 	for(int i=0;i<10;i++)
			cin>>s[i];

		for(int i=0;i<10;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				 if(s[i][3]==s[j][0])       //last letter of frst string n frst letter of next string same .. store their indices
				{
					flag=1;
					c[0]=i;
					c[1]=j;
						break;
				}
			}
				if(flag)
					break;
		}

			string a="";
			for(int i=0;i<10;i++)
				{

					if(i==c[0])             //append those two strings 
					{
						a=a+s[i][0]+s[i][1]+s[i][2];
						a=a+s[c[1]];
					}
					else if (i==c[1])
						continue;
					else                  //append others
						 a=a+s[i];
				}	
			
	cout<<a<<endl;
	
	}
	return 0;
 }