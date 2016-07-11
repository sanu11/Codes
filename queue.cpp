#include <bits/stdc++.h>
using namespace std;

class dynstack
{
	int *a;
	int top;
	int size;		
public:
	dynstack()
	{
		top = -1;
		size = 1; 
	}
	void set(int capacity);
	void incsize();
	void push(int num);
	void pop();
	void print();
};

void dynstack::set(int capacity)
{
	a = new int[capacity];
}

void dynstack::incsize()
{

	int newsize = 2*size;
	int *b = new int[newsize];
	size--;
	while(size > -1)
	{
		b[size] = a[size];
		size--;
	}
	size = newsize;
	delete a;
	a = new int[size];
	a = b;
	delete b;

}

void dynstack::push(int num)
{
	if (top == size-1)
	{
		incsize();
	}

	a[top + 1] = num;
	top = top + 1;
	
}

void dynstack::pop()
{
	if (top > -1)
	{
		top = top - 1;
	}
	else
	{
		cout << "stack underflow\n";
	}
}

void dynstack::print()
{
	int c = top;
	while(c > -1) {
	    cout << a[c] << " ";
	    c--;
	}
	cout << "\n";
}

int main()
{	
	int c,x,number;
	dynstack mys;
	int capacity;
	cin >> capacity;
	mys.set(capacity);
	while(true) 
	{
	    cout << "1. Push\n2. Pop\n3. Print\n";
	    cin >> c;
	    switch(c)
	    {
	    	case 1:
	    	cout << "Enter the number to push: ";
	    	cin >> number;
	    	mys.push(number);
	    	break;

	    	case 2:
	    	mys.pop();
	    	break;

	    	case 3:
	    	mys.print();
	    	break;

	    	default:
	    	cout << "Enter correct option\n";
	    	break;
	    }
	}
	return 0;
}

