#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,count;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		count=0;
		if(a[1]!=1&&a[1]!=-1){
			cout<<"impossible"<<endl;
			continue;
		}
		int option=0;
		int count2=0;
		int flag=0;
		int seqno=0;
		int temp;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==-1)
				count++;
			if(flag==0&&(a[i]==i||a[i]==-1)){
				count2++;
				// cout<<count2<<endl;
			}
			else if(flag==0&&a[i]==1&&count2==(i-1)){
				flag=1;
				k = count2;
			}
			else if(flag==0&&(a[i]!=i||a[i]!=-1)){
				cout<<"impossible"<<endl;
				option=2;
				break;
			}
			//impossible;
			else if(flag==1)
			{
				temp = i%k;
				if(temp==0&&(a[i]!=k||a[i]!=-1)){
					cout<<"impossible"<<endl;
					option=2;
					break;
				}
				else if(temp!=a[i]||a[i]!=-1){
					cout<<"impossible"<<endl;
					option=2;
					break;
				}
				
			}
		}
		// cout<<k<<" "<<option<<endl;
		
		if(count==n)
			cout<<"inf"<<endl;
		else if(count2==n)
			cout<<"inf"<<endl;
		else if(option==0)
			cout<<k<<endl;
	}


	return 0;
}