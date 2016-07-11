#include <bits/stdc++.h>

using namespace std;

class node
{
	int data;
	node *next;
	node *previous;
	public:
	static void insert(int value, int position);
	static void delet(int position);
	static int print ();
	static void fulldel();
}*head;

void node::insert(int value, int position)
{
	node *newnode = new node;
	newnode->data = value;

	if (position == 0 && head == NULL)
	{
		newnode->next = NULL;
		newnode->previous = NULL;
		head = newnode;
	}
	else if(position == 0)
	{

		newnode->next = head;
		newnode->previous = NULL;
		head->previous = newnode;
		head = newnode;
	}
	else
	{
		int count = 0;
		node *temp, *pointer = head;
		
		while(position > count && pointer != NULL) 
		{
		    count++;
		    temp = pointer;
		    pointer = pointer->next;
		}

		if(position > count)
		{
			cout << "Impossible to do so!\n";
			return;
		}
		else
		{
			temp->next = newnode;
			newnode->previous = temp;

			if (pointer != NULL)
				pointer->previous = newnode;
			
			newnode->next = pointer;
		}

	}
}


void node::delet(int position)
{
	node *temp, *pointer = head;
	if(head == NULL)
	{
		cout << "Unable to delete\n";
		return;
	}
	else if(position == 0)
	{
		if(pointer->next != NULL)
			pointer->next->previous = NULL;
		head = pointer->next;
		delete pointer;
	}
	else
	{
		int count = 0;
		while(position > count && pointer != NULL)
		{
			count++;
		    temp = pointer;
		    pointer = pointer->next;
		}

		if (position > count)
		{
			cout << "Exceeeeds";
			return;
		}

		if (pointer == NULL)
		{
			cout << "Seriously, should I delete NULL?\n";
			char c;
			cout << "Type [y/n]\n";
			cin >> c;
			if( c == 'y')
			{
				cout << "Fuck you! I have better things to do!\n";
			}
			else
			{
				cout << "That's better\n";
			}
			return;
		}

		temp->next = pointer->next;
		if (pointer->next != NULL)
			pointer->next->previous = temp;
		delete pointer;
	}
}

int node::print()
{
	node *pointer = head;
	cout << "NULL";
	while(pointer != NULL) {
	    cout << "<-" << pointer->data << "->" ;
	    pointer = pointer->next;
	}
	cout << "NULL\n";
}


int main(int argc, char const *argv[])
{
	head = NULL;
	int value,position,c;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete\n3.Print\n";
		cin>>c;
		switch(c)
		{
			case 1:
				cout << "value: ";
				cin >> value; 
				cout << "position: ";
				cin >> position;
				cout << "\n";
				node::insert(value,position);
				node::print();
				break;
			case 2:
				cout << "position: ";
				cin >> position;
				node::delet(position);
				node::print();
				break;
			case 3:
				node::print();
				break;
			default:
				cout << "Currently Unavilable";
				break;
		}
		
	}
	return 0;
}