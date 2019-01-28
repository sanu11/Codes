#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,k;
       scanf("%d",&n);
       vector<int>v(n,0);
       for(int i=0;i<n;i++)
           v[i]=i+1;
       if(n%2==0)
       {
       v.erase(v.begin()+n/2);
       k=1;
       }
       else
       {
         v.erase(v.begin()); 
         k=0;
       }
       while(v.size()>1)
       {
        if(v.size()%2!=0)
        {
            v.erase(v.begin()+k%v.size()); 
        }
        else
        {
        int y=(k+v.size()/2)%v.size();
            v.erase(v.begin()+y%v.size());
            
            if(y<k)
	    k=k%v.size();
            else
            k=(k+1)%v.size();
        }
       }
     for(int i=0;i<v.size();i++)
           cout<<v[i]<<"\n";
    }
    return 0;
}
