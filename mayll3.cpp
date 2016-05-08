	#include<bits/stdc++.h>
	using namespace std;
	typedef unsigned long long ll; 
	int main()
	{
	ll n,l,m,x,y,w,a,b,sumh=0,sumr=0,sum=0;
	cin>>n>>w>>l;
	multimap<ll, pair<ll,ll> >tree;

	for(int i=0;i<n;i++)
	{
	cin>>a>>b;	
	if(l<=a)
	y=0;
	else
	{
	x=l-a;
	y=(x)/b;
	if(x%b!=0)
		y++;
	}
	sumh+=a;
	sumr+=b;
	tree.insert(make_pair(y,make_pair(a,b)));
	}

	multimap<ll, pair<ll,ll> >::iterator p,q;

	p=tree.begin();
	q=p;
	q++;

	while(q!=tree.end())
	{
	q->second.first+=p->second.first;
	q->second.second+=p->second.second;
	if(p->first==q->first)
	{

		tree.erase(p);
		p=q;
		q++;
	}
	else
	{	
	p++;
	q++;
	}
	}

	// p=tree.begin();
	// cout<<"tree\n";
	// while(p!=tree.end())
	// {
	// cout<<p->first<<" "<<p->second.first<<" "<<p->second.second<<endl;
	// p++;
	// }

	sum=0;
	int flag=0;
	p=tree.begin();
	ll min=p->first;  //min months
	multimap<ll, pair<ll,ll> >::reverse_iterator rev;
	rev=tree.rbegin();
	ll max=rev->first;   // max months

	for(ll i=min;i<=max;i++)
	{
	p=tree.lower_bound(i);    // just lower months than i from map 

	if(p->first!=i)
	p--;

	sum=i*p->second.second+p->second.first;                 //months*rate+height

	if(sum>=w)
	{
	 flag=1;
	 cout<<i<<endl;
	 break;
	}
	}

	if(flag==0)
	{
	x=(w-sumh);		
	y=x/sumr;	

	if(x%sumr!=0)
	    cout<<y+1<<endl;
	else
		cout<<y<<endl;
	}
	return 0;
	}