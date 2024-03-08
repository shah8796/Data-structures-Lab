//#include<iostream>
//using namespace std;
//void insertionSort(int array[], int size) 
//{
//    for (int i = 1; i < size; i++) 
//    {
//        int key = array[i];
//        int j = i - 1;
//        while (key < array[j] && j >= 0)
//        {
//
//
//
//            array[j + 1] = array[j];
//            --j;
//        }
//
//
//        array[j + 1] = key;
//    }
//    cout << "sorted array is:" << endl;
//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << " ";
//    }
//}
//int main()
//{
//   int size;
//   cout << "enter the size of the array:" << endl;
//   cin >> size;
//   int* arr = new int[size];
//   cout << "enter the elements of the array:" << endl;
//   for (int i = 0; i < size; i++)
//   {
//       cin>>arr[i];
//   }
//   insertionSort(arr, size);
//      
//   
//}