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
int main()
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
/*
int main()
{
	double val1 = 0;
	double val2 = 0;
	int max = 0;
	int min = 0;
	cout << "Please, enter number 1 and number 2:\n";
	cin >> val1 >> val2;
	if (val1 > val2) {
		max = val1;
	}	
	else 
		max  = val2;
	if (val1 < val2) {
		min = val1;
	}		
	else
		min = val2;
	cout << "The biggest number is: " << max << "\n";
	cout << "The smallest number is: " << min << "\n";
	cout << "The summ of the numbers is: " << val1+val2 << "\n";
	cout << "The difference between the numbers is: " << max - min << "\n";
	cout << "The remainder of two values: " << max % min << "\n";
	keep_window_open();
	return 0;
}
*/
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Please, enter 3 integer values:\n";
	while (cin >> a >> b >> c) {
		if (a > b && b > c)
			cout << c << ", " << b << ", " << a << "\n";
		if (b > a && a > c)
			cout << c << ", " << a << ", " << b << "\n";
		if (c > b && b > a)
			cout << a << ", " << b << ", " << c << "\n";
		if (c > a && a > b)
			cout << b << ", " << a << ", " << c << "\n";
		if (b > c && c > a)
			cout << a << ", " << c << ", " << b << "\n";
		if (a > c && c > b)
			cout << b << ", " << c << ", " << a << "\n";
		if (a == b && b > c)
			cout << c << ", " << a << ", " << b << "\n";
		if (a == b && b < c)
			cout << a << ", " << b << ", " << c << "\n";
		if (a == c && c > b)
			cout << b << ", " << a << ", " << c << "\n";
		if (a == c && c < b)
			cout << a << ", " << c << ", " << b << "\n";
		if (b == c && c > a)
			cout << a << ", " << b << ", " << c << "\n";
		if (b == c && c < a)
			cout << b << ", " << c << ", " << a << "\n";
		if (a == c && c > b)
			cout << a << ", " << b << ", " << c << "\n";
		if (a == b && b == c)
			cout << a << ", " << b << ", " << c << "\n";
	}
	keep_window_open();
	return 0;
}
*/
/*
int main()
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
/*
int main() // 9. page 127
{
	string word = " ";
	int val = 0;
	cout << "Please, enter number word from 0 to 4:\n";
	cin >> word;
	if (word == "zero") {
		val = 0;
	}			
	if (word == "one") {
		val = 1;
	}			
	if (word == "two") {
		val = 2;		
	}	
	if (word == "three") {
		val = 3;
	}			
	if (word == "four") {
		val = 4;
	}
	else {
		word = "I dont know that number!\n";
		cout << word;
	}
	cout << val << "\n";
	keep_window_open();
	return 0;
}
*/

int main()
{
	double div = 0;
	string operation = "";
	double value1 = 0;
	double value2 = 0;
	cout << "Please, enter operation and two numbers:\n";
	cin >> operation >> value1 >> value2;
	if (operation == "+")
		cout << "The summ of two numbers: " << value1 + value2 << "\n";
	if (operation == "-")
		cout << "The difference between two numbers: " << value1 - value2 << "\n";
	if (operation == "*")
		cout << "The multiplication of two numbers: " << value1 * value2 << "\n";
	if (operation == "/") {
		div = value1 / value2;
		cout << "The divide of two numbers: " << div << "\n";
	}	
	else {
		cout << "ERROORRRRRRRRRRRR ";
	}		
	keep_window_open();
	return 0;
}