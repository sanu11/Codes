//saru95
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c,d,e,i,j,T ;
    string s;
    cin>>T;
    for(i=1;i<=T;i++)
	{   
        
        vector<char>v ;
       
        e=0 ;
        cin>>s;
        a=s.length();
        for(j=0;j<a;j++) 
        {
            if(j==a-1 && e==0 && s[j]=='0')
                v.push_back(s[j]) ;
            else if(s[j]>'0' && s[j]<='9' && e==0) 
            {   
                e=1;
                v.push_back(s[j]) ;
            }
            else if(s[j]>='0' && s[j]<='9' && e==1)
            {   
                e=1;
                v.push_back(s[j]) ;
            }
        }

        d=v.size();
        if(d==0)
            printf("0");
        for(j=0;j<d;j++) 
            printf("%c",v[j]) ;
        cout << endl ;
    }
    return 0 ;
}


