//#include<iostream>
//using namespace std;
//template <typename t>
//struct node {
//	node* next;
//	t data;
//};
//template <typename t>
//class queue {
//    node<t>* front;
//	node<t>* rear;
//	t count;
//public:
//	queue()
//	{
//		//front = new node<t>;
//		front = rear = nullptr;
//		count = 0;
//	}
//	bool isempty()
//	{
//		if (front==NULL)
//		{
//			return 1;
//		}
//		else
//			return 0;
//	}
//	void enque(t const element)
//	{
//		if (isempty())
//		{
//			front = new node<t>;
//			front->data = element;
//			rear = front;
//			rear->next = NULL;
//		}
//		else {
//			node<t>* temp=new node<t> ;
//			temp->data = element;
//			rear->next = temp;
//			rear = rear->next;
//			rear->next = NULL;
//		}
//		count++;
//	}
//	t deque()
//	{
//		
//
//		if (!isempty())
//		{
//			node<t>* temp;
//			temp = front;
//			t val = temp->data;
//			front = front->next;
//			count--;
//			delete temp;
//			return val;
//		}
//		else
//		{
//			cout << "queue is empty" << endl;
//			return 0;
//		}
//		
//	}
//	t front1()
//	{
//		return front->data;
//	}
//	t rear1()
//	{
//		//t temp;
//		//temp = rear->data;
//		return rear->data;
//	}
//	t size()
//	{
//		return count;
//	}
//	void rearrange(const queue<int>& obj)
//	{
//		queue<int> obj1=obj;
//		node<t>* temp;
//		//node* temp1;
//		temp = front;
//		temp = temp->next;
//		//temp1 = front;
//		t count2=0;
//		t count1 = obj1.size();
//		t f;
//		t i = 0;
//		while(i<=(count1-1))
//		{
//			if (count2 < (count1 / 2))
//			{
//				obj1.deque();
//				count2++;
//			}
//			else {
//				obj1.enque(temp->data);
//				f = obj1.deque();
//				obj1.enque(f);
//				temp = temp->next;
//				//temp = temp->next;
//				/*node<t>* temp1 = new node<t>;
//				f = obj1.deque();
//				temp1->data = f;
//				temp1->next = temp->next;
//				temp->next = temp1;
//				temp = temp->next;*/
//			}
//			i++;
//		}
//		front = obj1.front;
//	}
//	void print()
//	{
//		node<t>* temp;
//		temp = front;
//		while (temp!=NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//};
//int main()
//{
//	queue<int> obj;
//	obj.enque(1);
//	obj.enque(2);
//	obj.enque(3);
//	obj.enque(4);
//	obj.enque(5);
//	obj.enque(6);
//	obj.enque(8);
//	cout << "size of the queue:" ;
//	cout << obj.size();
//	cout << "\nnow implementing deque" << endl;
//	obj.deque();
//	cout << "now the element at the front:" ;
//	cout << obj.front1();
//	cout << "\nnow the element at the rear:" ;
//	cout << obj.rear1();
//	obj.print();
//	queue<int> obj1;
//	
//	obj1.enque(2);
//	obj1.enque(3);
//	obj1.enque(4);
//	obj1.enque(5);
//	obj1.enque(6);
//	obj1.enque(8);
//	//obj1 = obj;
//	obj.rearrange(obj1);
//	cout << endl;
//	obj.print();
//}