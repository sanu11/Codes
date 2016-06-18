#include<iostream>
using namespace std;
int i=2;
class abc
{
	int i;
	public:
abc()
		{::i+=2;
				cout<<"inside abc constructor\n";
		}
 void add()
	{
		::i*=3;
		cout<<"inside abc add\n";
	}
};
class pqr
{	
	int i;
	public:
virtual	 int sub()
	{
			cout<<"inside pqr sub\n";
		i+=3;
		return i;
	}
};

class xyz:public abc,public pqr
{
	int i;
	public:
	xyz()
	{
		cout<<"inside xyz constructor\n";
		i=::i>>2;
	}
	void add()
	{
			cout<<"inside xyz add\n";
	::i+=2;
	}
	int sub()
	{
			cout<<"inside xyz sub\n";
	i*=3;
	abc a;
	return i;
	}
};

int main()
{
	abc *a;
	xyz b;
	a=&b;
	a->add();
	cout<<::i<<" ";
	pqr *c;
	c=&b;
	int t=c->sub();
cout<<t<<" "<<i;
	return 0;
}

//
//3 6
// 3 14
