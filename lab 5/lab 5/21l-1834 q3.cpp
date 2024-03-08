//#include<iostream>
//using namespace std;
//template<typename t>
//class stack {
//	t top;
//	t *arr;
//public:
//	stack()
//	{
//		top = -1;
//		arr = new t[20];
//	}
//	bool isstackempty()
//	{
//		if (top == -1)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void push(t const element)
//	{
//		top++;
//		arr[top] = element;
//	}
//	t pop()
//	{
//		if (isstackempty())
//		{
//			cout << "stack is empty" << endl;
//			return 0;
//		}
//		else
//		{
//			top--;
//			return arr[top + 1];
//		}
//		
//		
//	}
//
//
//};
//bool match(char a, char b)
//{
//	if (a == '{' && b == '}')
//	{
//		return 1;
//	}
//	if (a == '[' && b == ']')
//	{
//		return 1;
//	}
//	if (a == '(' && b == ')')
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//bool isbalanced(char* s)
//{
//	stack<char> s1;
//	int i = 0;
//	bool a = true;
//	while (s[i] != '\0')
//	{
//		if (s[i] == '{' || s[i] == '[' || s[i] == '(')
//		{
//			s1.push(s[i]);
//		}
//		else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
//		{
//			char a=s1.pop();
//			if (!match(a, s[i]))
//			{
//				a = false;
//			}
//			else
//				a = true;
//		}
//		i++;
//
//	}
//	return a;
//}
//int main()
//{
//	char* b=new char;
//	cout << "enter the expression:" << endl;
//	cin >> b;
//	if (isbalanced(b))
//	{
//		cout << "EXPRESSION  MATCHED" << endl;
//	}
//	else
//	{
//		cout << "EXPRESSION HAS NOT MATCHED" << endl;
//	}
//}