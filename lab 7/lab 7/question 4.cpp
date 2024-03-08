//#include<iostream>
//using namespace std;
//void trisum(int n)
//{
//	int result = 1;
//	int result1 = 2;
//	int result2 = 3;
//	int result3 = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i <= 3)
//		{
//			cout << " " << i << " ";
//		}
//		else
//		{
//			int temp = 0;
//			int temp1 = 0;
//			result3=result + result1 + result2;
//			cout << " " << result3 << " ";
//			temp = result1;
//			temp1 = result2;
//			result2 = result3;
//			result = temp;
//			result1 = temp1;
//		}
//		
//		
//	}
//}
//void trisum(int n,int i,int result,int result1,int result2,int result3)
//{
//	i++;
//	
//	if (i <= 3)
//	{
//		cout <<" "<< i << " ";
//		trisum(n, i,result,result1,result2,result3);
//	}
//	else if (i <= n)
//	{
//		int temp = 0;
//		int temp1 = 0;
//		result3 = result1 + result + result2;
//		cout << " " << result3 << " ";
//		temp = result1;
//		temp1 = result2;
//		result2 = result3;
//		result1 = temp1;
//		result = temp;
//		trisum(n,i, result, result1, result2,result3);
//	}
//}
//int main()
//{
//	int x = 6;
//	cout << "iterative approach:" << endl;
//	trisum(6);
//	cout << "\nrecursive approach:" << endl;
//	trisum(x,0,1,2,3,0);
//
//}