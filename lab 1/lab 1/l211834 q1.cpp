//#include<iostream>
//using namespace std;
//int binarySearch(int array[], int x , int size) 
//{
//    //bool check = false;
//    //int h;
//    int high = size - 1;
//    int low = 0;
//    int mid = (high + low) / 2;
//    for (; low > high;)
//    {
//        if (x == array[mid])
//            return mid;
//        else if (x < array[mid])
//            high = mid - 1;
//        else if (x > array[mid])
//            low = mid + 1;
//        mid = (high + low) / 2;
//    }
//        
//    
//}
//void bubbleSort(int array[], int size) 
//{
//    for (int j = 0; j < size; ++j) 
//    {
//        for (int i = 0; i < size - j; ++i) 
//        {
//            if (array[i] > array[i + 1]) 
//            {
//                int temp = array[i];
//                array[i] = array[i + 1];
//                array[i + 1] = temp;
//            }
//        }
//    }
//    int d;
//    cout << "the element which u wanna search:" << endl;
//    cin >> d;
//
//    cout<<"the element is present at:"<<binarySearch(array, d, size);
//}
//int main()
//{
//	int size;
//	cout << "enter the size of the array:" << endl;
//	cin >> size;
//	int* arr = new int[size];
//	cout << "enter the elements of the array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin>>arr[i];
//	}
//    bubbleSort(arr, size);
//}