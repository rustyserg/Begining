#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "D:\Projects\std_lib_facilities.h"

/*
int main()
{
	cout << "please, enter a value with a floating point:\n";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nn*3 == " << n * 3
		<< "\nn+n == " << n + n
		<< "\nn*n == " << n * n
		<< "\nn/2 == " << n / 2
		<< "\nsqrt(n) == " << sqrt(n)
		<< "\n";
	keep_window_open();
	return 0;
}
*/

/*
int main()
{
	int i3 = 11;
	double d1 = i3;
	double d2 = 21.0;
	int i4 = d2;
	int i1 = 10;
	char c = 'x';
	bool b1 = c;
	bool b3 = i1;
	bool b4 = 10;
	bool b2 = 'x';
	int i2 = b3;
	char c2 = b1;
	cout << c << b1 << c2 << b2 << "\n" << i1 << b3 << i2 << b4 << "\n" << i3 << d1 << i4 << d2 << "\n";
	keep_window_open();
	return 0;
}
*/
/*
int main()
{
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << " d == " << d
			<< " i== " << i
			<< " i2== " << i2
			<< " char (" << c<< ")\n";
		keep_window_open();
		return 0;
	}
}
*/

/*
int main() //2 p.126 DONE
{
	double mile = 1.609;
	double kilometer = 0;
	cout << "Please, enter number of miles:\n";
	cin >> kilometer;
	cout << "The number of kilometers is: " << kilometer * mile << "\n";
	keep_window_open();
	return 0;
}
*/

//int main() // 4 p. 127 DONE
//{
//	double reminder = 0;
//	double val1 = 0;
//	double val2 = 0;
//	double max = 0;
//	double min = 0;
//	cout << "Please, enter number 1 and number 2:\n";
//	cin >> val1 >> val2;
//	if (val1 > val2) {
//		max = val1;
//		min = val2;
//	}	
//	else {
//		max = val2;
//		min = val1;
//	}	
//	int tt = max / min;
//	reminder = max - tt * min;
//	cout << "The biggest number is: " << max << "\n";
//	cout << "The smallest number is: " << min << "\n";
//	cout << "The summ of the numbers is: " << val1+val2 << "\n";
//	cout << "The difference between the numbers is: " << max - min << "\n";
//	cout << "The remainder of two values: " << reminder << "\n";
//	keep_window_open();
//	return 0;
//}

//int main()  //5 p. 127
//{
//	int a, b, c = 0;
//	bool sort_flag = false;
//	cout << "Please, enter 3 integer values:\n";
//	cin >> a >> b >> c;
//	while (!sort_flag) {
//
//		if (a > b) {
//			a = a + b;
//			b = a - b;
//			a = a - b;	
//			sort_flag = true;
//		}
//
//		if (b > c) {
//			b = b + c;
//			c = b - c;
//			b = b - c;
//			sort_flag = true;
//		}
//		else sort_flag = false;
//	}
//	if (sort_flag = false)
//		cout << a << ", " << b << ", " << c << "\n";
//	keep_window_open();
//	return 0;
//}

/*
int main()  //8. page 127 DONE
{
	int val = 0;
	cout << "Please, enter integer number:\n";
	cin >> val;
	if (val%2 == 0)
		cout << "The number " << val << " is even\n";
	else
		cout << "The number " << val << " is not even\n";
	keep_window_open();
	return 0;
}
*/

//int main() // 9. page 127 DONE
//{
//	string word = " ";
//	int val = -1;
//	cout << "Please, enter number word from 0 to 4:\n";
//	cin >> word;
//	if (word == "zero") {
//		val = 0;
//	}			
//	else if (word == "one") {
//		val = 1;
//	}			
//	else if (word == "two") {
//		val = 2;		
//	}	
//	else if (word == "three") {
//		val = 3;
//	}			
//	else if (word == "four") {
//		val = 4;
//	}
//	if (val != -1) {
//		cout << val << "\n";
//	}
//	else {
//		word = "I dont know that number!\n";
//		cout << word;
//	}
//	keep_window_open();
//	return 0;
//}


//int main() //10 page 127-128 DONE
//{
//	double div = 0;
//	string operation = "";
//	double value1 = 0;
//	double value2 = 0;
//	cout << "Please, enter operation and two numbers:\n";
//	cin >> operation >> value1 >> value2;
//	if (operation == "+")
//		cout << "The summ of two numbers: " << value1 + value2 << "\n"; 
//	else if (operation == "-")
//		cout << "The difference between two numbers: " << value1 - value2 << "\n"; 
//	else if (operation == "*")
//		cout << "The multiplication of two numbers: " << value1 * value2 << "\n";
//	else if (operation == "/") {
//		div = value1 / value2;
//		cout << "The divide of two numbers: " << div << "\n";
//	}
//	else {
//		cout << "ERROORRRRRRRRRRRR ";
//	}
//	keep_window_open();
//	return 0;
//}


int main()
{
	int dollar = 0;
	char currency = ' ';
	double vallue = 0;
	cout << "Please, enter the number of dollars and currency (gr,rub,eur,poun):\n";
	cin >> dollar >> currency;
	switch (currency) {
	case 'gr': //case 'g': case 'hr':
		vallue = dollar * 26.00;
		cout << "gr = "<< vallue << "\n";
		break;
	case 'rub': //case 'ru': case 'r':
		vallue = dollar * 65.00;
		cout << "rub = "<< vallue << "\n";
		break;
	case 'eur':
		vallue = dollar * 0.9;
		cout << "eur = "<< vallue << "\n";
		break;
	case 'poun': //case 'po': case 'p': case 'pou':
		vallue = dollar * 0.5;
		cout << "pound = "<< vallue << "\n";
		break;
	default: 
		cout << "Too much symbols or i don't know that currency.\n";
		break;
	}	
	keep_window_open();
	return 0;
}

//int main()
//{
//	int a = 0;
//	cin >> a;
//	switch (a) {
//	case 1: case 3: case 5: case 7: case 9:
//		cout << a << " is not even" <<"\n";
//		break;
//	case 0: case 2: case 4: case 6: case 8:
//		cout << a << " is even" << "\n";
//		break;
//	default:
//		cout << "It's not a number" << "\n";
//		break;
//	}
//	keep_window_open();
//	return 0;
//}