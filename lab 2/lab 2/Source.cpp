//#include<iostream>
//using namespace std;
//class MyVector {
//	int* arrayptr, capacity, currentsize;
//public:
//	MyVector()
//	{
//		currentsize = 0;
//		capacity = 2;
//		arrayptr = new int[capacity];
//		for (int i = 0; i < 2; i++)
//		{
//			arrayptr[i] = 0;
//		}
//	}
//	MyVector(int no)
//	{
//		currentsize = 0;
//		capacity = no;
//		arrayptr = new int[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			arrayptr[i] = 0;
//		}
//	}
//	MyVector(MyVector& temp)
//	{
//		capacity = temp.capacity;
//		currentsize = temp.currentsize;
//		arrayptr = new int[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			arrayptr[i] = temp.arrayptr[i];
//		}
//	}
//	int getcapacity()
//	{
//		return capacity;
//	}
//	void operator +(int no)
//	{
//		if (capacity == currentsize)
//		{
//			int* temp = new int[capacity];
//			for (int i = 0; i < capacity; i++)
//			{
//				temp[i] = arrayptr[i];
//			}
//			arrayptr = new int[capacity * 2];
//			for (int i = 0; i < capacity; i++)
//			{
//				arrayptr[i] = temp[i];
//			}
//			arrayptr[capacity] = no;
//			currentsize = capacity;
//			capacity *= 2;
//			for (int i = currentsize + 1; i < capacity; i++)
//			{
//				arrayptr[i] = 0;
//			}
//		}
//		else
//		{
//			arrayptr[currentsize + 1] = no;
//			currentsize++;
//		}
//	}
//	void operator -()
//	{
//		arrayptr[currentsize] = 0;
//		currentsize--;
//	}
//	int* operator +(MyVector& temp)
//	{
//		int* ptr = new int[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			ptr[i] = arrayptr[i];
//		}
//		int tempcap = capacity + temp.capacity;
//		currentsize += temp.currentsize;
//		arrayptr = new int[tempcap];
//		for (int i = 0; i < capacity; i++)
//		{
//			arrayptr[i] = ptr[i];
//		}
//		for (int i = capacity, j = 0; i < tempcap; i++, j++)
//		{
//			arrayptr[i] = temp.arrayptr[j];
//		}
//		return arrayptr;
//	}
//	void operator=(MyVector& temp)
//	{
//		delete[] arrayptr;
//		capacity = temp.capacity;
//		currentsize = temp.currentsize;
//		arrayptr = new int[capacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			arrayptr[i] = temp.arrayptr[i];
//		}
//	}
//	friend istream& operator>>(istream& cin1, MyVector& temp);
//	friend ostream& operator<<(ostream& cin1, MyVector& temp);
//	~MyVector()
//	{
//		delete[] arrayptr;
//	}
//};
//istream& operator>>(istream& cin1, MyVector& temp)
//{
//	int cap, curr;
//	cout << "Enter the capacity of array: ";
//	cin >> cap;
//	temp.capacity = cap;
//	temp.arrayptr = new int[cap];
//	cout << "enter the elements:" << endl;
//	for (int i = 0; i < cap; i++)
//	{
//		cin >> temp.arrayptr[i];
//		temp.currentsize++;
//	}
//	return cin1;
//}
//ostream& operator<<(ostream& cin1, MyVector& temp)
//{
//	cout << "The capacity of array: " << temp.capacity << endl;
//	cout << "The current size of array: " << temp.currentsize << endl;
//	for (int i = 0; i < temp.capacity; i++)
//	{
//		cout << temp.arrayptr[i] << endl;
//	}
//	return cin1;
//}
//
//int main()
//{
//	MyVector a, b;
//	int* ptr;
//	cin >> a;
//	a + 12;
//	cout << a;
//	cout << a.getcapacity();
//	-a;
//	cout << a;
//	a = b;
//	cout << endl;
//	ptr= a + b;
//	
//	
//	//system("pause");
//	return 0;
//}