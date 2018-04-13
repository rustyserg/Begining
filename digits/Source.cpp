#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "D:\Projects\std_lib_facilities.h"
#include <vector>
#include <iostream>

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

//int main()  //5 p. 127 DONE
//{
//	int a = 0, b = 0, c = 0;
//	bool sort_flag = false;
//	cout << "Please, enter 3 integer values:\n";
//	cin >> a >> b >> c;
//	while (!sort_flag) {
//
//		if (a > b) {
//			a = a + b;
//			b = a - b;
//			a = a - b;	
//			sort_flag = false;
//		}
//
//		else if (b > c) {
//			b = b + c;
//			c = b - c;
//			b = b - c;
//			sort_flag = false;
//		}
//		else sort_flag = true;
//	}
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


//int main()  // 11 p.128 DONE
//{
//	int one_cent= 0;
//	int five_cent = 0;
//	int ten_cent = 0;
//	int twentyfive_cent = 0;
//	int fifty_cent = 0;
//	int dollar = 0;
//	int amount1 = 0;
//	int amount5 = 0;
//	int amount10 = 0;
//	int amount25 = 0;
//	int amount50 = 0;
//	int dollars_in_total = 0;
//	int coins_in_total = 0;
//	int y = 0;
//	cout << "Please, enter amount of the one cent coints?\n";
//	cin >> one_cent;
//	cout << "Please, enter amount of the five cent coints?\n";
//	cin >> five_cent;
//	cout << "Please, enter the amount of ten cent coints?\n";
//	cin >> ten_cent;
//	cout << "Please, enter the amount of twentyfive cent coints?\n";
//	cin >> twentyfive_cent;
//	cout << "Please, enter the amount of fifty cent coints?\n";
//	cin >> fifty_cent;
//	cout << "Please, enter the amount of dollar coints?\n";
//	cin >> dollar;
//	if (one_cent == 1) {
// 		cout << "You have " << one_cent << " one cent coin\n";
//	}
//	else {
//		cout << "You have " << one_cent << " one cent coins\n";
//	}
//	if (five_cent == 1) {
//		cout << "You have " << five_cent << " five cent coin\n";
//	}
//	else {
//		cout << "You have " << five_cent << " five cent coins\n";
//	}
//	if (ten_cent == 1) {
//		cout << "You have " << ten_cent << " ten cent coin\n";
//	}
//	else {
//		cout << "You have " << ten_cent << " ten cent coins\n";
//	}
//	if (twentyfive_cent == 1) {
//		cout << "You have " << twentyfive_cent << " twentyfive cent coin\n";
//	}
//	else {
//		cout << "You have " << twentyfive_cent << " twentyfive cent coins\n";
//	}
//	if (fifty_cent == 1) {
//		cout << "You have " << fifty_cent << " fifty cent coin\n";
//	}
//	else {
//		cout << "You have " << fifty_cent << " fifty cent coins\n";
//	}
//	if (dollar == 1) {
//		cout << "You have " << dollar << " one dollar\n";
//	}
//	else {
//		cout << "You have " << dollar << " dollars\n";
//	}
//	amount1 = one_cent * 1;
//	amount5 = five_cent * 5;
//	amount10 = ten_cent * 10;
//	amount25 = twentyfive_cent * 25;
//	amount50 = fifty_cent * 50;
//	y = amount1 + amount5 + amount10 + amount25 + amount50;
//	if (y >= 100) {
//		dollars_in_total = dollar + y / 100;
//		coins_in_total = y - (y / 100)*100;
//		cout << "The total value of your coins is " << dollars_in_total << " dollars " << coins_in_total << " cents." << "\n";
//	}
//	else
//		cout << "The total value of your coins is " << dollar << " dollar " << y << " cents." << "\n";
//	keep_window_open();
//	return 0;
//}

//int main()  // p. 149 DONE
//{
//	int dollar = 0;
//	char currency = ' ';
//	double vallue = 0;
//	cout << "Please, enter the number of dollars and currency (g,r,e,p):\n";
//	cin >> dollar >> currency;
//	switch (currency) {
//	case 'g':
//		vallue = dollar * 26.00;
//		cout << "gr = "<< vallue << "\n";
//		break;
//	case 'r':
//		vallue = dollar * 65.00;
//		cout << "rub = "<< vallue << "\n";
//		break;
//	case 'e':
//		vallue = dollar * 0.9;
//		cout << "eur = "<< vallue << "\n";
//		break;
//	case 'p':
//		vallue = dollar * 0.5;
//		cout << "pound = "<< vallue << "\n";
//		break;
//	default: 
//		cout << "Too much symbols or i don't know that currency.\n";
//		break;
//	}	
//	keep_window_open();
//	return 0;
//}

//int main() //DONE
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

//int main()  p. 151 DONE
//{
//	char a = 'a';
//	int i = 97;
//	while (i<123) {
//		cout << a << '\t' << i << '\n';
//		++i;
//		++a;
//	}
//	keep_window_open();
//	return 0;
//}


//// Меняем местами
//int main() {
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	if (a < b) {
//	}
//	else {
//	int t;
//	t = a;
//	a = b;
//	b = t;
//	}
//	cout << a << "\t" << b << "\n";
//	keep_window_open();
//	return 0;	
//}

//int main()   p. 154 DONE
// {
//	char a = 'a';
//	char b = ' ';
//	for (int i = 97; i < 123; ++i) {
//		cout << a << '\t' << i << '\n';
//		++a;
//	}
//	for (int i = 32; i < 58; i++) {
//		cout << b << '\t' << i << '\n';
//		++b;
//	}
//	keep_window_open();
//	return 0;
//}


//int square(int x)  p. 157 DONE
//{		
//	int y;
//	for (int i = 0; i < x; ++i) {
//		y += x;
//	}
//	return y;
//}
//
//int main() {
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < 100; ++i) {
//		cout << i << "\t" << square(i) << "\n";
//	}
//	keep_window_open();
//	return 0;
//}


int main() { // example 165

	string bleep = "BLEEP";
	string disliked = "Broccoli";
	vector <string> words;
	for (string temp; cin >> temp;) {
		words.push_back(temp);
	}
	for (int i = 0; i < words.size(); ++i) {
		if (words[i] == disliked) {
			words[i] = bleep;
		}
		cout << words[i] << "\n";
	}	
	keep_window_open();
	return 0;
}
