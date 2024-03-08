//#include<iostream>
//using namespace std;
//bool binarysearch(int l,int r,int m,int arr[])
//{
//	int x;
//	x = l+r / 2;
//	if (arr[x] == m)
//	{
//		cout << "index is:" << x << endl;
//		return true;
//	}
//	else if(m < arr[x]) {
//		r--;
//		return binarysearch(l, r, m, arr);
//	}
//	else if (m > arr[x])
//	{
//		l++;
//		return binarysearch(l, r, m, arr);
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int l = 0;
//	int r = 10;
//	cout<<binarysearch(l, r, 2, arr)<<endl;
//}