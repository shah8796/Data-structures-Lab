//#include<iostream>
//using namespace std;
//class minheap {
//	int* arr;
//	int capacity;
//	int totitems;
//public:
//	minheap()
//	{
//		arr = nullptr;
//		capacity = 0;
//		totitems = 0;
//		arr = new int[10];
//	}
//	minheap(int cap)
//	{
//		capacity = cap;
//		arr = new int[capacity];
//	}
//	void swap(int* &arr1,int x,int y)
//	{
//		int temp = arr1[x];
//		arr1[x] = arr[y];
//		arr[y] = temp;
//
//	}
//	void minheapify()
//	{
//		
//		int smallest;
//			for (int i = 0; i < (totitems-2); i++)
//			{
//				int count = 0;
//				int l = (2 * i) + 1;
//				int r = (2 * i) + 2;
//				if (l<lchild(i)&&(arr[i] > arr[l]))
//				{
//					smallest = l;
//					count++;
//				}
//				if (r < totitems)
//				{
//					if (arr[i] > arr[r])
//					{
//						smallest = r;
//							count++;
//					}
//				}
//				if (l < totitems || r < totitems)
//				{
//					if ((arr[r] > arr[l]) && (arr[i] > arr[l]))
//					{
//						smallest = l;
//						count++;
//					}
//				}
//				if (count != 0)
//				{
//					swap(arr, i, smallest);
//				}
//			}
//			
//		
//	}
//	int parentnode(int index)
//	{
//		return (index - 1) / 2;
//	}
//	int lchild(int index)
//	{
//		return arr[2 * index + 1];
//	}
//	int rchild(int index)
//	{
//		return arr[2 * index + 2];
//	}
//	void insert(int key)
//	{
//
//		arr[totitems] = key;
//		totitems++;
//		int i=totitems-1;
//		while (i != 0 && arr[parentnode(i)] > arr[i])
//		{
//			swap(arr, parentnode(i), i);
//			i = parentnode(i);
//		}
//		
//	}
//	void delmin()
//	{
//		swap(arr, 0, (totitems - 1));
//		totitems = totitems - 1;
//		minheapify();
//	}
//	bool isempty()
//	{
//		if (totitems == 0)
//		{
//			return 1;
//		}
//		else
//			return 0;
//	}
//	void print()
//	{
//		for (int i = 0; i < totitems; i++)
//		{
//			cout << arr[i]<<" ";
//		}
//	}
//};
//int main()
//{
//	minheap obj;
//	obj.insert(12);
//	obj.insert(18);
//	obj.insert(8);
//	obj.insert(19);
//	obj.insert(23);
//	obj.insert(89);
//	obj.insert(76);
//	obj.insert(34);
//	obj.insert(23);
//	obj.insert(1);
//	obj.print();
//	obj.delmin();
//	cout << endl;
//	cout << "after deletion:" << endl;
//	obj.print();
//
//}