#include <iostream>
using namespace std;

int main() 
{
int a,b;
int n=21;
int m=16;
while(m!=-4)
{
cin>>a;                 // end me always person ko 1 dena hai so that he loses.
n=n-a;                 // always give 16,11,6 to person in order to make  him loose(accordingly subtract utna n give it to him) .. :)
cout<<n<<endl;
n=m;
cout<<n<<endl;
m=m-5;
}
cout<<"You lose"<<endl;
return 0;
}