//#include<iostream>
//using namespace std;
//class myvector {
//	int* ptr=new int[2];
//	int capacity;
//	int currsize;
//public:
//	myvector()
//	{
//		//ptr = new int[2];
//		capacity = 0;
//		currsize = 0;
//		for (int i = 0; i < 2; i++)
//		{
//			ptr[i] = 0;
//		}
//	}
//	myvector(int parameter)
//	{
//		capacity = parameter;
//		currsize = capacity;
//		ptr = new int[parameter];
//		for (int i = 0; i < capacity; i++)
//		{
//			ptr[i] = 0;
//		}
//	}
//	myvector(const myvector& obj)
//	{
//		capacity = obj.capacity;
//		currsize = obj.currsize;
//		for (int i = 0; i < obj.currsize; i++)
//		{
//			this->ptr[i] = obj.ptr[i];
//		}
//	}
//
//	
//	int getcapacity()
//	{
//		return capacity;
//	}
//	myvector operator+(int var)
//	{
//		if (currsize == capacity)
//		{
//			this->capacity *= 2;
//		}
//		//int* ptr1 = new int(capacity);
//		
//		/*for (int i = 0; i < this -> currsize; i++)
//		{
//			this->ptr[i] = this->ptr[i];
//		}*/
//		
//		/*delete[] ptr;*/
//		currsize++;
//		ptr[currsize-1] = var;
//		return *this;
//		
//	
//	}
//	myvector operator-()
//	{
//		//myvector obj2;
//		/*for (int i = 0; i < this -> currsize-1; i++)
//		{
//			obj2.ptr[i] = this->ptr[i];
//		}*/
//		//obj2.ptr[currsize - 1] = '\0';
//		ptr[currsize - 1] = '\0';
//		//obj2.currsize = currsize - 1;
//		currsize = currsize - 1;
//		return *this;
//	}
//	myvector operator+(const myvector& obj)
//	{
//		//myvector obj2;
//		//int cursize1 = obj.currsize;
//		//obj2.currsize = obj.currsize + this->currsize;
//		int count = currsize;
//		currsize += obj.currsize ;
//		//int* ptr2 = new int[obj2.currsize];
//		//obj2.capacity = obj.capacity + this->capacity;
//		capacity += obj.capacity ;
//		for (int i = count,j=0; i < currsize; i++,j++)
//		{
//			ptr[i] = obj.ptr[j];
//			/*if (i >= count)
//			{
//
//			}*/
//			/*if (i < this->currsize)
//			{
//				obj2.ptr[i] = this->ptr[i];
//			}
//			else
//				obj2.ptr[i] = obj.ptr[i];*/
//		}
//		return *this;
//	}
//	void operator=(const myvector& obj)
//	{
//		for (int i = 0; i < obj.currsize; i++)
//		{
//			this->ptr[i] = obj.ptr[i];
//		}
//		//return obj;
//	}
//	friend ostream& operator<<(ostream& out, myvector& obj)
//	{
//		out << "capacity :" << obj.capacity << endl;
//		out << "current size :" << obj.currsize << endl;
//		out << "array is:" << endl;
//		for (int i = 0; i < obj.currsize; i++)
//		{
//			out << obj.ptr[i] << " ";
//		}
//		out << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, myvector& obj)
//	{
//		cout << "input the capacity:" << endl;
//		in >> obj.capacity;
//		obj.currsize = obj.capacity;
//		cout << "input the array:" << endl;
//		for (int i = 0; i < obj.capacity; i++)
//		{
//			in >> obj.ptr[i];
//		}
//		return in;
//	}
//	/*~myvector()
//	{
//		delete[] ptr;
//	}*/
//};
//int main()
//{
//	myvector obj;
//	myvector obj1(2);
//	myvector obj3;
//	myvector obj4;
//	cin >> obj;
//	cout << obj;
//	myvector obj2(obj);
//	cout << obj2;
//	 obj + (7);
//	cout << obj;
//	-obj;
//	cout << obj;
//	obj2 + obj;
//	cout << obj2;
//}