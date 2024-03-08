//#include<iostream>
//using namespace std;
//template<typename t>
//struct node  {
//	t data;
//	node* next;
//};
//template<typename t>
//class stack {
//	node<t>* head;
//	t top;
//public:
//	stack()
//	{
//		head = nullptr;
//		top = 0;
//	}
//	void push(t const& element)
//	{
//		if (head == NULL)
//		{
//			head = new node<int>;
//			head->data = element;
//			head->next = NULL;
//		}
//		else {
//
//			node<t>* temp = new node<t>;
//			temp->data = element;
//			temp->next = head;
//			top++;
//		}
//
//		//  TIME COMPLEXITY IS O(1)//
//
//	}
//	t size()
//	{
//		//  TIME COMPLEXITY IS O(1)//
//		return top;
//	}
//	void pop()
//	{
//		head = head->next;
//		top--;
//		//  TIME COMPLEXITY IS O(1)//
//	}
//	bool isEmpty()
//	{
//		if (top == 0)
//		{
//			return true;
//		}
//		else
//			return false;
//		//  TIME COMPLEXITY IS O(1)//
//	}
//};
//int main()
//{
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	s.push(5);
//	s.push(6);
//	s.push(7);
//	s.push(8);
//	s.push(9);
//	cout << s.isEmpty() << endl;
//	s.pop();
//	cout<<s.size();
//
//}