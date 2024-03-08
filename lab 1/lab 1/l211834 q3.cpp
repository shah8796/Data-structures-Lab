//#include<iostream>
//using namespace std;
//void swap(int* x, int* y) 
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//void selectionSort(int array[], int size) 
//{
//    for (int j = 0; j < size - 1; j++) {
//        int min = j;
//        for (int i = j + 1; i < size; i++)
//        {
//
//      
//            if (array[i] < array[min])
//                min = i;
//        }
//
//        swap(&array[min], &array[j]);
//    }
//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << " ";
//    }
//}
//int main()
//{
//     int size;
//     cout << "enter the size of the array:" << endl;
//     cin >> size;
//     int* arr = new int[size];
//     cout << "enter the elements of the array:" << endl;
//     for (int i = 0; i < size; i++)
//     {
//     	cin>>arr[i];
//     }
//     selectionSort(arr, size);
//       
//}