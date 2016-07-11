#include <bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *previous;
	
		static int len();
		static void insert(int value, int position);
		static void delet(int position);
		static void print ();
		static void fulldel();
}*head;

int node::len()
{
	int length = 0;
	node *pointer = head;

	if(pointer == NULL)
		return length;

	pointer = pointer->next;
	length++;

	while(pointer != head)
	{
		pointer = pointer->next;
		length++;
	}

	return length;
}

void node::insert(int value, int position)
{
	node *newnode = new node;
	newnode->data = value;

	if(head == NULL && position == 0) //NULL
	{
		newnode->next = newnode;
		head = newnode;
	}
	else if(position == 0 && head != NULL) //2-2
	{
		newnode->next = head;
		if(head->next == head)
		{
			head->next = newnode;
			head = newnode;
		}
		else
		{
			node *temp = NULL, *pointer = head->next;
			while(pointer != head) 
			{
				temp = pointer;
			    pointer = pointer->next;
			}	
			temp->next = newnode;
			head = newnode;
		}
	}
	else
	{
		node *temp, *pointer = head;
		temp = pointer;
		pointer = pointer->next;

		if (temp == pointer)
		{
			newnode->next = pointer;
			head->next = newnode;
		}

		else
		{
			int count = 1;
			while(position > count && pointer != head )
			{
				count++;
				temp = pointer;
		    	pointer = pointer->next;
			}	
			if(position > count)
			{
				cout << "Exceeds\n";
				return;
			}
			temp->next = newnode;
			newnode->next = pointer;
		}
		
	}

}

void node::delet(int position)
{
	node *temp, *pointer = head;

	if(head == NULL)
	{
		cout << "Empty list\n";
	}
	else if (position == 0)
	{
		if (pointer == pointer->next)
		{
			delete pointer;
			head = NULL;
		}
		else
		{
			temp = pointer;
			pointer = pointer->next;
			while(pointer != head)
			{
				temp = pointer;
				pointer = pointer->next;
			}
			temp->next = pointer->next;
			head = pointer->next;
			delete pointer;
		}
	}
	else
	{
		int count = 0;

		do
		{
		    count++;
		    temp = pointer;
		    pointer = pointer->next;
		}
		while(position > count && pointer != head);
		if (pointer == head && position >= count )
			{
				cout << "Exceeds dimensions\n";
				return;
			}
		temp->next = pointer->next;
		delete pointer;
		
	}
}

void node::print()
{
	if (head == NULL)
	{
		cout << "Empty!\n";
		return;
	}
	node *pointer = head;
	cout << pointer->data << "-";
	pointer = pointer->next;
	while(pointer != head) 
	{
		cout << pointer->data << "-";
		pointer = pointer->next;
	}
	cout << pointer->data << "\n";
}

int main()
{	
	head = NULL;
	int value,position,c;
	while(true)
	{
		cout<<"\nEnter Choice :\n1.Insert\n2.Delete\n3.Print\n4.Head\n";
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
			case 4:
				cout << "Head value: " << head->data << "\n";
				break;
			default:
				cout << "Currently Unavilable";
				break;
		}
	}
	return 0;
}
