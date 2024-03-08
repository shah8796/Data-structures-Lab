//#include<iostream>
//using namespace std;
//template<typename t>
//struct node {
//	t data;
//	node<t>* next;
//};
//template<typename t>
//class stack {
//	t size;
//	node<t>* head;
//public:
//	stack()
//	{
//		head = nullptr;
//		size = 0;
//	}
//	void push(t const element)
//	{
//		if (head == NULL)
//		{
//			head = new node<t>;
//			head->data = element;
//			head->next = NULL;
//		}
//		else
//		{
//			node<t>* temp = new node<t>;
//			temp->data = element;
//			temp->next = head;
//			if (temp->data == temp->next->data)
//			{
//				size++;
//			}
//			head = temp;
//		}
//	}
//	void deletion()
//	{
//		node<t>* temp = new node<t>;
//		node<t>* temp1;
//		temp = head;
//		int count = 0;
//		int count1 = 0;
//
//		while (temp->next->next != NULL)
//		{
//			
//			if (count == 0 && (temp->data == temp->next->data))
//			{
//				head = head->next;
//			}
//			else if (temp->next->data == temp->next->next->data)
//			{
//				temp1 = temp->next;
//				temp->next = temp1->next;
//				count1++;
//
//				delete temp1;
//			}
//			else if (count1 == size)
//			{
//				temp1 = temp->next;
//				temp->next = temp1->next;
//
//				delete temp1;
//			}
//			else {
//				count++;
//				temp = temp->next;
//			}
//			//temp = temp->next;
//		}
//
//		//  TIME COMPLEXITY IN BIG OH WOULD BE: O(N)//
//	}
//	void print()
//	{
//		node<t>* temp;
//		temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data <<" "<< endl;
//			temp = temp->next;
//		}
//	}
//
//};
//int main()
//{
//	stack<char> s1;
//	s1.push('a');
//	s1.push('b');
//	s1.push('b');
//	s1.push('b');
//	s1.push('c');
//	s1.push('d');
//	s1.print();
//	s1.deletion();
//	cout << "after deletion:" << endl;
//	s1.print();
//}