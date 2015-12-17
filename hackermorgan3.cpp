#include<bits/stdc++.h>
int *val,*vi,sum=0,temp;  
using namespace std;
int findParent(int i,vector<int> &parent)
{
    if(parent[parent[i]]!=parent[i])
        parent[i]=findParent(parent[i],parent);
    return parent[i];
}
void unionNodes(int a,int b,vector<int> &parent,vector<int> &size)
{
    int parent_a=findParent(a,parent),parent_b=findParent(b,parent);
    if(parent_a==parent_b)
        return;
    if(size[parent_a]>=size[parent_b])//the larger connected component eats up the smaller one
    {
         size[parent_a]+=size[parent_b];
         val[parent_a]+=val[parent_b];
         parent[parent_b]=parent_a;
    }
    else
    {
         size[parent_b]+=size[parent_a];
         val[parent_a]+=val[parent_b];
         parent[parent_a]=parent_b;
    }
    return;
} 
int main() 
{
int n,q; 
scanf("%d%d",&n,&q);
val=new int[n+1];
vi=new int[n+1]{0};
//vector<vector<int> > v(n+1); 
vector<int>parent[n+1]{0},size[n+1]{0};
for(i=1;i<=N;i++)
 {
        parent[i]=i;
        size[i]=1;
 }
 

for(int i=1;i<=n;i++)
scanf("%d",&val[i]);

int x,y;	
for(int i=1;i<=q;i++)
{
scanf("%d%d",&x,&y);
unionNodes(x,y,parent,size);
}
   return 0;
}

