//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
//#include "D:\Projects\std_lib_facilities.h"
#include <vector>
#include <iostream>
#include <cmath>
#include <limits>
#include <system_error>
#include <stdexcept>
#include <iomanip>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

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

//int main()    // p. 154 DONE
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


//int square(int x)   // p. 157 DONE
//{		
//	int y = 0;
//	for (int i = 0; i < x; ++i) {
//		y += x;
//	}
//	return y;
//}
//
//int main() {
//	for (int i = 0; i < 100; ++i) {
//		cout << i << "\t" << square(i) << "\n";
//	}
//	keep_window_open();
//	return 0;
//}

//int main() { // example 165 DONE
//
//	string bleep = "BLEEP";
//	string disliked = "Broccoli";
//	vector <string> words;
//	for (string temp; cin >> temp;) {
//		words.push_back(temp);
//	}
//	cout << words.size() << "\n";
//	for (int i = 0; i < words.size(); ++i) {
//		if (words[i] == disliked) {
//			words[i] = bleep;
//		}
//		cout << words[i] << "\n";
//	}	
//	keep_window_open();
//	return 0;
//}

//int main() {      // p. 167 DONE
//	vector <double> numbers;
//	double number1 = 0;
//	double number2 = 0;
//	double y = 1.0 / 100;
//	double max = 0;
//	double min = 0;
//	while(cin >> number1 >> number2) {
//			numbers.push_back(number1);
//			numbers.push_back(number2);
//		if (number1 < number2) {
//			max = number2;
//			min = number1;
//			cout << "minimum = " << min << "\n";
//			cout << "maximum = " << max << "\n";
//		}
//		else if (number1 > number2) {
//			max = number1;
//			min = number2;
//			cout << "minimum = " << min << "\n";
//			cout << "maximum = " << max << "\n";
//		}
//		else if (number1 = number2) {
//			cout << "the numbers are equal." << "\n";
//		}
//		if (max - min < y) {
//		cout << "the numbers are almost equal." << "\n";
//		}
//		for (int i = 0; i<numbers.size(); ++i) {
//			cout << numbers[i] << "\n";
//		}
//	}
//	keep_window_open();
//	return 0;
//}

//int main() {  //p. 192 DONE
//try {
//	vector <int> v;
//	for (int x; cin >> x;) {
//		if (!cin) {
//			error(" cant !!");
//		}
//		v.push_back(x);
//		sort(v.rbegin(), v.rend());
//	}
//	for (int i = 0; i < v.size(); ++i) {
//		cout << "v[" << i << "] == " << v[i] << "\n";
//	}
//	keep_window_open();
//}
//catch (runtime_error) {
//	cerr << "range_error\n";
//	keep_window_open();
//	return 1;
//}
//catch (...) {
//	cerr << "something goes wrong\n";
//	keep_window_open();
//	return 2;
//}
//}

//int  main()  // with magic numbers;
//{
//	vector<double>  temps;
//	for (double temp; cin >> temp;) {
//		temps.push_back(temp);
//	}
//	double sum = 0;
//	double hiqh_temp = -1110;
//	double low_temp = 1110;
//
//	const double min_temp = -100;
//	const double max_temp = 60;
//
//	for (double x: temps) {
//		if (x >= min_temp && x <= max_temp){
//		if (x > hiqh_temp) hiqh_temp = x;	
//		if (x < low_temp) low_temp = x;	
//		sum += x;
//		}
//		else {
//			error("WTF !?");
//		}
//	}
//	cout << "Max temp: " << hiqh_temp << "\n";
//	cout << "Min temp: " << low_temp << "\n";
//	cout << "Middle temp: " << sum / temps.size() << "\n";
//	keep_window_open();
//	return 0;
//}

//double ctock(double k) {   // p . 214 tasks 1-5 DONE 
//	double c = k - 273.15;
//	if (k < 0) {
//		cout << "The temperature is below 0K";
//		error("The temperature is below 0K");
//		keep_window_open();
//	}
//	else {
//		return c;
//	}
//}
//int main() {
//	double k = 0;
//	cin >> k;
//	cout << "The temperature is " << ctock(k) << "C" << "\n";
//	keep_window_open();
//	return  0;
//}

//double from_c_to_f(double c) {   // p . 214 task 6 DONE 
//	double f = 9.0/5.0*c + 32; 
//	if (c < -273.15) {
//		cout << "The temperature is below -273.15";
//		error("The temperature is below -273.15");
//		keep_window_open();
//	}
//	else {
//		return f;
//	}
//}
//
//int main() {
//	double c = 0;
//	cin >> c;
//	cout << "The temperature is " << from_c_to_f(c) << "F" << "\n";
//	keep_window_open();
//	return  0;
//}

//void quadratic_equation(double a, double b, double c) {   // p. 214 task 7 DONE
//	double x1 = 0;
//	double x2 = 0;
//	if ((b*b - 4 * a*c) < 0) {
//		cout << "There are no real roots (D < 0)";
//		error("There are no real roots (D < 0)");
//		keep_window_open();
//	}
//	else {
//		x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a*c;
//		x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a*c;
//		cout << "x1 = " << x1 <<"\n";
//		cout << "x2 = " << x2 << "\n";
//	}
//}
//
//int main() {
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	cout << "Please enter a, b, c (int or double values)\n";
//	cin >> a >> b >> c;
//	quadratic_equation(a, b, c);
//	keep_window_open();
//	return  0;
//}

//bool is_number(const string& s) // p. 215 tasks 8-10 DONE 
//{
//	std::string::const_iterator it = s.begin();
//	while (it != s.end() && isdigit(*it)) ++it;
//	return !s.empty() && it == s.end();
//}
//
//void first_n_digits(int number, const vector <double> &values) {
//	for (int i = 0; i < number; ++i) {
//		cout << values[i] << " ";
//	}
//}
//
//int main() {     
//	vector <double> values;
//	double sum = 0;
//	string s_number = "";
//	int number = 0;
//	cout << "Please, enter the number of summable values:\n";
//	cin >> s_number;
//	if (is_number(s_number)) {
//		number = atoi(s_number.c_str());
//		cout << "Please, enter a few double values: \n";
//		for (double value; cin >> value;) {
//			values.push_back(value);
//		}
//		if (number > values.size()) {
//			cerr << "The number vallue is more than vector size!\n";
//			system("pause");
//			return 0;
//		}
//		else {
//			for (int i = 0; i < number; ++i) {
//				sum += values[i];
//			}
//		}
//	}
//	else {
//		cerr << "The number is not integer. Try again.\n";
//		system("pause");
//		return 0;
//	}
//	cout << "The summ of the first " << number << " values (";
//	first_n_digits(number, values);
//	cout << ")" << " = " << sum << "\n";
//	system("pause");
//	return 0;
//}

//int main() {  // The Descent coding game
//
//	while (1) {
//		int max_height = 0;
//		int max_index = 0;
//		for (int i = 0; i < 8; i++) {
//			int mountainH;
//			cin >> mountainH; cin.ignore();
//			if (max_height < mountainH) {
//				max_height = mountainH;
//				max_index = i;
//			}
//		}
//		cout << max_index << endl;
//	}
//}

//int main() {   // 11 p.215  DONE
//
//	int max_value = std::numeric_limits<int>::max();
//	std::vector <int> sequence = {1, 1, 2, 3, 5, 8, 13, 21, 34}; 
//	for (int x: sequence)
//	cout << x << "\n";
//	//auto it = sequence.end();
//	//it = sequence.insert(it, 0);
//	sequence.push_back(0);
//	try //код, который может привести к ошибке, располагается тут
//	{
//		for (int i = 9; i < 51; ++i) {
//			unsigned int error = sequence[i - 1] + sequence[i - 2];
//			if (error > max_value)
//			{
//				throw 1; //генерировать целое число 1
//			}
//			else {
//				sequence[i] = sequence[i - 1] + sequence[i - 2];
//				sequence.push_back(sequence[i]);
//				cout << sequence[i] << "\n";
//			}
//		}
//	}
//	catch (int i)//сюда передастся число 1
//	{
//		cout << "ERROR:" << i << " the summ of las number + previous number is more than int" << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main() // Why x == 1 ???
//{
//	int x = 0;
//	int y = 0;
//
//	if (x++ && y++)
//	{
//		y += 2;
//	}
//	std::cout << x << std::endl;
//	std::cout << y << std::endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string stars = " ";
//	int num_of_levels = 0;
//	int sum_of_glasses = 0;
//	std::cout << "Enter number of levels: " << std::endl;
//	cin >> num_of_levels;
//
//	for (int i = 1; i <= num_of_levels; i++)
//	{
//		sum_of_glasses += i;
//		stars += "*";
//		std::cout << stars << std::endl;
//	}
//	std::cout << sum_of_glasses << std::endl;
//	system("pause");
//	return 0;
//}

//int main()  // outsmarted myself
//{
//	int number = 0;
//	std::cout << "Enter five-digit number:" << std::endl;
//	cin >> number;
//	if (number < 100000) {
//		int first = number / 10000;
//		int second = (number % 10000) / 1000;
//		int third = ((number % 10000) % 1000) / 100;
//		int fourth = (((number % 10000) % 1000) % 100) / 10;
//		int fifth = (((number % 10000) % 1000) % 100) % 10;
//
//		std::cout << "1 digit = " << first << std::endl;
//		std::cout << "2 digit = " << second << std::endl;
//		std::cout << "3 digit = " << third << std::endl;
//		std::cout << "4 digit = " << fourth << std::endl;
//		std::cout << "5 digit = " << fifth << std::endl;
//	}
//	else {
//		cerr << ("You entered an incorrect number. The number must be five-digit.") << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main() {    // DONE
//	string name = "";
//	string second_name = "";
//	string patronymic = "";
//	string group = "";
//	cout << "Enter name of a student: ";
//	cin >> name;
//	cout << "Enter second name of a student: ";
//	cin >> second_name;
//	cout << "Enter patronymic of a student: ";
//	cin >> patronymic;
//	cout << "Enter number of a group: ";
//	cin >> group;
//
//	int len = 34;
//	int len_str1 = (29 + group.length());
//	int len_str2 = name.length() + second_name.length() + patronymic.length();
//	if (len_str1 >= len_str2 && len_str1 > len) {
//		len = len_str1;
//	}	
//	else
//		if (len_str2 > len) {
//			len = len_str2;
//		}
//	 cout << "\n\t\t\t";
//	 for (int i = 0; i < len; i++) {
//		 cout << "*";
//	 }
//	 cout << "\n\t\t\t* Laboratory work N1";
//	 for (int i = 0; i < (len - 21); i++) {
//		 cout << " ";
//	}
//	cout << "*\n\t\t\t* is done by a student gr. " << group;
//	for (int i = 0; i <= (len - len_str1); i++) {
//		cout << " ";
//	}	
//	cout << "*\n\t\t\t* " << second_name << " " << name << " " << patronymic;
//	for (int i = 6; i <= (len - len_str2); i++) {
//		cout << " ";
//	}
//	cout << "*\n\t\t\t"; 
//	for (int i = 0; i < len; i++) {
//		cout << "*";
//	}	
//	cout << endl;
//	system("pause");
//	return 0;


int main() // all test cases passed !!!!!!!!!
{
	vector <int> pos (1);
	vector <int> neg (1);
	int min = 0;
	int n; // the number of temperatures to analyse
	cin >> n; cin.ignore();
	if (n == 0) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		int t; // a temperature expressed as an integer ranging from -273 to 5526
		cin >> t; cin.ignore();
		if (t > 0) {
			pos.push_back(t);
		}
		else
			if (t < 0) {
				neg.push_back(t);
			}
	}
	sort(pos.begin(), pos.end());
	sort(neg.rbegin(), neg.rend());
	if (neg.size() == 1) {
		min = pos[1];
		cout << min << endl;
		return 1;
	}
	if (pos.size() > 1) {
		if (abs(pos[1]) == abs(neg[1])) {
		min = pos[1];
		}
		else 
			if (abs(pos[1]) > abs(neg[1])) {
			min = neg[1];
			}
			else {
				min = pos[1];
			}
	}
	else {
		min = neg[1];
	}
	cout << min << endl;
	system("pause");
	return 0;	
}