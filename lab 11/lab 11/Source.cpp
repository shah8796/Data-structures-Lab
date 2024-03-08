//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//template<typename v>
//struct HashItem
//{
//	int key;
//	v value;
//	short status;
//
//};
//template<typename v>
//class Hashmap {
//	HashItem<v>* array;
//	int currcapacity;
//	int currentelements;
//	virtual int getnextcandidateindex(int key, int i)
//	{
//		int result = (key+i) % currcapacity;
//		return result;
//	}
//	int loadfactor;
//public:
//	Hashmap()
//	{
//		currcapacity = 100;
//		array = new HashItem<v>[currcapacity];
//	}
//	Hashmap(int const c)
//	{
//		currcapacity = c;
//		array = new HashItem<v>[c];
//	}
//	void setcapacity(int cap)
//	{
//		currcapacity = cap;
//	}
//	void insert(int key, v value)
//	{
//		int index = key % currcapacity;
//		
//		if (array[index].status !=2)
//		{
//			array[index].key = key;
//			array[index].value = value;
//
//			array[index].status = 2;
//		}
//		else if(array[index].status == 2)
//		{
//			int i = 0;
//			while (array[index].status == 2)
//			{
//				i++;
//				index = getnextcandidateindex(key, i);
//			}
//			array[index].key = key;
//			array[index].value = value;
//
//			array[index].status = 2;
//		}
//		currentelements++;
//		/*loadfactor = currcapacity / currentelements;
//		if (loadfactor < 1)
//		{
//			doublecapacity();
//		}*/
//	}
//	void copyarray(HashItem<v>* const &array1)
//	{
//		for (int i = 0; i < currcapacity; i++)
//		{
//			if (array1[i].status == 2)
//			{
//				array[i].key = array1[i].key;
//				array[i].value = array1[i].value;
//			}
//		}
//	}
//	/*void doublecapacity()
//	{
//		currcapacity *= 2;
//		HashItem<v>* harray=new Hashitem<v>[currcapacity];
//		for (int i = 0; i < capacity; i++)
//		{
//			if (array[i].status == 2)
//			{
//				int newindex = array[i].key % currcapacity;
//				if (harray[newindex].status == 1 || harray[newindex].status == 2)
//				{
//					
//					harray[newindex].key = array[i].key;
//					harray[newindex].value = array[i].value;
//					harray[newindex].status = 2;
//				}
//				else if (harray[newindex].status == 2)
//				{
//					int i = 0;
//					while (harray[newindex].status == 2)
//					{
//						newindex = getnextcandidateindex(key, i);
//					}
//				}
//			}
//		}
//		copyarray(harray);
//	}*/
//	bool deletecandidate(int key)
//	{
//		int index = key % currcapacity;
//		if (array[index].status == 2)
//		{
//			array[index].status = 1;
//			return true;
//		}
//		else
//			return false;
//	}
//	
//	void print()
//	{
//		for (int i = 0; i < currcapacity; i++)
//		{
//			if (array[i].status == 2)
//			{
//				cout << array[i].value << endl;
//			}
//		}
//	}
//	
//};
//void getdata(Hashmap<string>obj1)
//{
//	ifstream fin;
//	int capacity;
//	int key;
//	string name;
//	fin.open("hashing.txt");
//	fin >> capacity;
//	obj1.setcapacity(capacity);
//	fin.ignore(100,'\n');
//	while (!fin.eof())
//	{
//
//
//		fin >> key;
//		fin.ignore();
//		fin >> name;
//		obj1.insert(key, name);
//		fin.ignore(100, '\n');
//	}
//}
//int main()
//{
//	Hashmap<string>obj;
//	getdata(obj);
//	//obj.insert(8, "ali");
//	obj.print();
//}
//
