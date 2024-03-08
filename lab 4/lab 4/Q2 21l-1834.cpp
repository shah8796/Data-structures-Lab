//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
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
//	void insert(int const element)
//	{
//		if (head == NULL)
//		{
//			head = new node;
//			head->data = element;
//			tail = head;
//			tail->next = head;
//		}
//		else
//		{
//			node* temp = new node;
//			temp->data = element;
//			tail->next = temp;
//			tail = tail->next;
//			tail->next = head;
//		}
//	}
//	void insertatindex(int const v1, int const v2)
//	{
//		node* temp;
//		node* temp1=new node;
//		temp = head;
//		temp1->data = v1;
//		bool a = true;
//		while (temp->next != head && a==true)
//		{
//			if (temp->next->data == v2)
//			{
//				temp1->next = temp->next;
//				temp->next = temp1;
//				a = false;
//			}
//			temp = temp->next;
//		}
//	}
//	bool search(int const element)
//	{
//		node* temp;
//		temp = head;
//		bool a = true;
//		while (temp->next != head && a == true)
//		{
//			if (temp->data == element)
//			{
//				cout << "\nthe element"<<element<<" is found" << endl;
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
//		while (temp->next != head && a == true)
//		{
//			if (temp->next->data == first)
//			{
//				temp1->next = temp->next->next;
//				temp->next = temp1;
//				a = false;
//			}
//			temp = temp->next;
//		}
//	}
//	void print()
//	{
//		node* temp;
//		temp = head;
//		while (temp->next != head)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//};
//int main()
//{
//	set obj;
//	obj.insert(2);
//	obj.insert(3);
//	obj.insert(5);
//	obj.insert(1);
//	obj.insert(3);
//	cout << "ELEMENTS INSERTED AT END" << endl;
//	obj.print();
//	obj.search(5);
//	obj.insertatindex(6, 5);
//	cout << "ELEMENTS AFTER VALUE V1 IS INSERTED BEFORE V2:" << endl;
//	obj.print();
//	obj.update(5, 7);
//	cout << "\nELEMENTS AFTER UPDATION:" << endl;
//	obj.print();
//}