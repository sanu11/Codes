#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class node;
vector<node>v;
int cnt;
class node
{
    public:
string comp,color;
int size;
char c;
bool check;
    node(string co,string col,int s,char ty)
    {
    comp=co;
        color=col;
        size=s;
        c=ty;
    check=0;
    }
    void srch();
};

vector<node>::iterator p;
void  node::srch()
{
    p=v.begin();
    while(p!=v.end())
     {
        if(p->check==0) 
        if(p->color==color&&p->size==size&&p->comp==comp)
            if((p->c=='L'&&c=='R')||(p->c=='R'&&c=='L'))
            {
            cnt++;
           this->check=1;
           p->check=1;
           break;
           //cout<<p->size<<p->c<<endl;
           }
            p++;
    }
}
int main() 
{
int n;
cnt=0;
cin>>n;
string comp,color;
    int size;
    char typ;
    for(int i=0;i<n;i++)
    {
    cin>>comp>>size>>color>>typ;
    node n(comp,color,size,typ);
    v.push_back(n);
    n.srch();            
    }
    cout<<cnt<<"\n";
    return 0;
}
