//#include<iostream>
//using namespace std;
//int divi(int a, int b,int i)
//{
//	
//	if (a > -1)
//	{
//		a -= b;
//		i++;
//		return divi(a, b,i);
//		
//	}
//	return i - 1;
//	
//}
//int modu(int a, int b)
//{
//	
//	if (a > -1)
//	{
//		a -= b;
//		return modu(a, b);	
//	}
//	if (a == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return a + b;
//	}
//}
//int main()
//{
//	int div,dividend;
//	cout << "Enter the divisor:" << endl;
//	cin >> div;
//	cout << "Enter the dividend:" << endl;
//	cin >> dividend;
//	int i = 0;
//	cout<<"result of division:"<<divi(dividend, div,i) << endl;
//	cout <<"result of modulus:"<< modu(dividend, div) << endl;
//}