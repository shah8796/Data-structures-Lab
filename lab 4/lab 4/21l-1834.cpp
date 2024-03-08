//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//	node* prev;
//};
//class set {
//	node* head;
//	node* tail;
//public:
//	set()
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//	void insertatend(int const element) 
//	{
//		if (head == NULL)
//		{
//			head = new node;
//			head->data = element;
//			head->prev = NULL;
//			tail = head;
//			tail->next = NULL;
//		}
//		else
//		{
//			node* temp = new node;
//			temp->data = element;
//			tail->next = temp;
//			tail = tail->next;
//			tail->prev = head;
//			tail->next = NULL;
//		}
//	}
//	bool search(int const element)
//	{
//		node* temp;
//		temp = head;
//		bool a = true;
//		while (temp != NULL&& a==true)
//		{
//			if (temp->data == element)
//			{
//				cout << "\nthe element "<<element<<" is found" << endl;
//				a = false;
//				return true;
//			}
//			temp = temp->next;
//		}
//	}
//	void update(int const first, int const changed)
//	{
//		node* temp;
//		node* temp1=new node;
//		temp1->data = changed;
//
//		temp = head;
//		bool a = true;
//		while (temp != NULL && a == true)
//		{
//			if (temp->next->data == first)
//			{
//				temp1->next = temp->next->next;
//				temp1->prev = temp;
//				temp->next = temp1;
//				a = false;
//			}
//			temp = temp->next;
//		}
//	}
//	void insertedsort(int const element)
//	{
//		
//		if (head == NULL)
//		{
//			head = new node;
//			head->data = element;
//			head->prev = NULL;
//			tail = head;
//			tail->next = NULL;
//		}
//		else
//		{
//			node* count;
//			node* temp=new node;
//			count = head;
//			temp->data = element;
//			bool a = true;
//			while (count != NULL && a == true)
//			{
//				if (count->data < element && count->next == NULL)
//				{
//					node* temp = new node;
//					temp->data = element;
//					tail->next = temp;
//					tail = tail->next;
//					tail->prev = head;
//					tail->next = NULL;
//					a = false;
//				}
//				else if (count->data > element && count->prev == NULL)
//				{
//					temp->next = count;
//					temp->prev = NULL;
//					head = temp;
//					a = false;
//				}
//				else if (count->data<element && count->next->data>element)
//				{
//					temp->next = count->next;
//					temp->prev = count;
//					count->next = temp;
//					a = false;
//				}
//				count = count->next;
//			
//			}
//		}
//	}
//	void print()
//	{
//		node* temp;
//		temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//};
//int main()
//{
//	set obj;
//	obj.insertatend(2);
//	obj.insertatend(3);
//	obj.insertatend(4);
//	obj.print();
//	cout << "\nsearching:" << endl;
//	obj.search(3);
//	cout << "\n updation:" << endl;
//	obj.update(4, 6);
//	obj.print();
//	set obj1;
//	obj1.insertedsort(2);
//	obj1.insertedsort(7);
//	obj1.insertedsort(6);
//	obj1.insertedsort(5);
//	obj1.insertedsort(10);
//	obj1.insertedsort(3);
//	obj1.insertedsort(4);
//	obj1.insertedsort(9);
//	cout << "\n inserted sort:" << endl;
//	obj1.print();
//}