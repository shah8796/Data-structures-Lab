//#include<iostream>
//using namespace std;
//void fibonacci(int n)
//{
//	int result = 0;
//	int result1 = 0;
//	int result2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (i <= 1)
//		{
//			result1 += i;
//			cout << " " << i << " ";
//		}
//		else
//		{
//			int temp = 0;
//			result2=result1 + result;
//			cout << " " << result2 << " ";
//			temp = result1;
//			result1 = result2;
//			result = temp;
//		}
//		
//		
//	}
//}
//void fibonacci1(int n,int i,int result,int result1,int result2)
//{
//	i++;
//	
//	if (i <= 1)
//	{
//		result1 += i;
//		cout <<" "<< i << " ";
//		fibonacci1(n, i,result,result1,result2);
//	}
//	else if (i < n)
//	{
//		int temp = 0;
//		result2 = result1 + result;
//		cout << " " << result2 << " ";
//		temp = result1;
//		result1 = result2;
//		result = temp;
//		fibonacci1(n,i, result, result1, result2);
//	}
//}
//int main()
//{
//	int x = 6;
//	cout << "iterative approach:" << endl;
//	fibonacci(6);
//	cout << "\nrecursive approach:" << endl;
//	fibonacci1(x, -1,0,0,0);
//	
//}