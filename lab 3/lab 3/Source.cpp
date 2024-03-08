//#include<iostream>
//using namespace std;
//template<typename t>
//struct node {
//	t data;
//	node<t>* next;
//	node(t input)
//	{
//		data = input;
//		next = nullptr;
//	}
//};
//template<typename t>
//class dat {
//	node<t>* head;
//	node<t>* tail;
//public:
//	dat()
//	{
//		//head = new node<t>;
//		//tail = new node<t>;
//		head = nullptr;
//		//tail = nullptr;
//		tail = head;
//	}
//	void InsertAtStart(t const element)
//	{
//		
//			if (head == NULL) 
//			{
//				head = new node<t>(element);
//				//head->data = element;
//				head->next = NULL;
//				tail = head;
//			}
//			else 
//			{
//				node<t>* temp = new node<t>(element);
//				//temp->data = element;
//				temp->next = head;
//				head = temp;
//				//head->next = NULL;
//				//tail = head;
//			}
//		
//	}
//	void InsertAtEnd(t const element)
//	{
//		
//		if (head == NULL)
//		{
//			head = new node<t>(element);
//			//head->data = element;
//			head->next = NULL;
//			tail = head;
//		}
//		else
//		{
//			node<t>* temp = new node<t>(element);
//			//tail = head;
//			//node<t>* temp1 = new node<t>(element);
//			//temp = head;
//			tail->next = temp;
//			tail = tail->next;
//			//head = tail;
//		}
//	}
//	void insertbeforeelement(t const v1, t const v2)
//	{
//		node<t>* temp = new node<t>(v1);
//		node<t>* temp1 = new node<t>(v1);
//		node<t>* temp2 = new node<t>(v1);
//		//node<t>* temp1 = new node<t>(element);
//		//temp = head;
//		temp1 = head;
//		temp2 = head;
//		
//		while (temp1->data!=v2)
//		{
//			temp1 = temp1->next;
//			if (temp1->data == v2)
//			{
//				temp2->next = temp;
//			}
//		}
//		head = temp2;
//	}
//	bool search(t const element) const
//	{
//		node<t>* temp;
//		temp = head;
//		while (temp != nullptr)
//		{
//			if (temp->data == element)
//			{
//				cout << element << "found" << endl;
//				return true;
//			}
//			temp = temp->next;
//		}
//	}
//	bool checkelement() const
//	{
//		if (head == nullptr)
//		{
//			cout << "it is an empty set" << endl;
//			return true;
//		}
//		else
//		{
//			cout << "it is not an empty set" << endl;
//			return false;
//			
//		}
//
//	}
//	void deletefromstart()
//	{
//		node<t>* val;
//		val = head;
//		head = head->next;
//		delete val;
//		
//	}
//	void deleteall(t const element)
//	{
//		node<t>* temp;
//		node<t>* temp1;
//		node<t>* temp2;
//		temp = head;
//		while (temp != nullptr)
//		{
//			if (temp->data == element)
//			{
//				temp1 = temp;
//				temp = temp->next;
//				delete temp1;
//			}
//			temp = temp->next;
//			//head = head->next;
//		}
//	}
//
//	void print()
//	{
//		node<t>* temp;
//		temp = head;
//		while (temp != nullptr)
//		{
//			cout << temp->data << endl;
//			temp = temp->next;
//		}
//	}
//	void unionlist(dat<t>& obj,dat<t>& obj1)
//	{
//		head = obj.head;
//		head->next = obj1.head;
//	}
//};
//int main()
//{
//	dat<int> t1;
//	t1.InsertAtStart(2);
//	t1.InsertAtStart(6);
//	t1.InsertAtStart(7);
//	t1.InsertAtEnd(7);
//	t1.InsertAtEnd(8);
//	t1.InsertAtEnd(9);
//	t1.print();
//	t1.search(2);
//	t1.search(9);
//	t1.search(10);
//	t1.checkelement();
//	t1.deletefromstart();
//	t1.print();
//	//t1.deleteall(7);
//	//t1.print();
//	//t1.insertbeforeelement(10, 9);
//	dat<int> t2;
//	dat<int> t3;
//	t2.InsertAtStart(1);
//	t2.InsertAtStart(2);
//	t2.InsertAtStart(3);
//	t2.InsertAtStart(4);
//	t2.InsertAtStart(5);
//	t3.InsertAtStart(6);
//	t3.InsertAtStart(7);
//	t3.InsertAtStart(8);
//	t3.InsertAtStart(9);
//	t3.InsertAtStart(10);
//	t3.InsertAtStart(11);
//	t3.InsertAtStart(12);
//	t3.InsertAtStart(13);
//	t3.InsertAtStart(14);
//	t3.InsertAtStart(15);
//	t1.unionlist(t2, t3);
//	t1.print();
//}