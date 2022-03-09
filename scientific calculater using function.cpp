#include <iostream>
#include<string>
#include<iomanip>
#include <math.h>
#include <cmath>
#include<conio.h>
#include <cstdlib>
using namespace std;
float operation(float a, float b) {
	float pl{};
	pl = 3.14159265;
	int c;
	int n, table = 1, i{};
	int number, factorial = 1;
	int x, num{};
	cin >> c;
	switch (c) {
	case 1:
		return a / b;
		break;
	case 2:
		return a * b;
		break;
	case 3:
		return a - b;
		break;
	case 4:
		return a + b;
		break;
	case 5:
		return  pow(a, b);
		break;
	case 6:
		return sqrt(a), sqrt(b);
		break;
	case 7:
		return sin(a), sin(b);
		break;
	case 8:
		return cos(a), cos(b);
		break;
	case 9:
		return tan(a),tan(b);
		break;
	case 10:
		return  asin(a) * 180.0 / pl, asin(b) * 180.0 / pl;
		break;
	case 11:
		return acos(a) * 180.0 / pl, acos(b) * 180.0 / pl;
		break;
	case 12:
		return atan(a) * 180.0 / pl, atan(b) * 180.0 / pl;
		break;
	case 13:
		return log(a), log(b);
		break;
	case 14:
		return log10(a), log10(b);
		break;
	case 15:
		return factorial;
		for (int i = 1; i <= number; i++) {
			factorial = factorial * i;
		}
		break;
	case 16:
		return table;
		for (i = 1; i <= 10; i++) {
			table = n * i;
		}
		break;
	case 17:
		return a / 2 == 0, b / 2 == 0;
		if (a / 2 == 0 && b / 2 == 0) {
			cout << "even num";
		}
		else {
			cout << "odd num";
		}
		break;
	case 18:
		return
			a = a + b,
			b = a - b;

		a = a + b;
		b = a - b;
		break;
	default:
		cout << "wrong input" << endl;
	}

}
int main() {
	float num1, num2;
	float pl{};
	pl = 3.14159265;
	int factorial = 1;
	int  table = 1;
	string username;
	string userpassword;
	int loginattempt = 0;
	while (loginattempt < 5) {
		cout << "please enter your user name:";
		cin >> username;
		cout << "please enter your user password:";
		cin >> userpassword;
		if (username == "tahmina" && userpassword == "sahar") {
			cout << "wellcome tahmina";
			break;
		}
		else if (username == "beheshta" && userpassword == "sahar")
		{
			cout << "wellcome beheshta";
			break;
		}
		else {
			cout << "invalid login attempt. try again \n" << '\n';
			loginattempt++;
		}
	}
	if (loginattempt == 5) {
		cout << "too many loginattempt! the program will now terminate";
		return 0;
	}
	cout << endl;
	cout << "\t\t\t*************************calculator*****************************\n";
	cout << "----------------------------------\n";
	cout << "operations\t" << "\ttrigonometric function" << "\t\tlogarithmic functions" ;
	cout << "----------------------------------\n";
	cout << "1:divitions\t\t" << "7:sin\t\t" << "\t\t13:log" << endl;
	cout << "2:multiplication\t" << "8:cos\t\t" << "\t\t14:log with base 10"  << endl;
	cout << "3:subtraction\t\t" << "9:tan\t\t" << "\t\t15:factorial"  << endl;
	cout << "4:addition\t\t" << "10:inverse of sin\t\t" << "16:table of a number"  << endl;
	cout << "5:exponent\t\t" << "11:inverse of cos\t\t" << "17:even and ood"  << endl;
	cout << "6:square root\t\t" << "12:inverse of tan\t\t" << "18:swap to numbers" << endl;
	cout << "----------------------------------\n";
	
	cout << "enter the 1st number ";
	cin >> num1;
	cout << "enter the 2nd number ";
	cin >> num2;
	cout << "divition =  " << num1 / num2 << endl;//case1
	cout << "multiplacation =  " << num1 * num2 << endl;//case2
	cout << "subtraction =  " << num1 - num2 << endl;//case3
	cout << "additon =  " << num1 + num2 << endl;//case4
	cout << "exponent =  " << pow(num1, num2) << endl;//case5
	cout << "square root =  " << sqrt(num1)<< sqrt(num2) << endl;//case6
	cout << "sin =  " << sin(num1)<< sin(num2) << endl;//case7
	cout << "cos=  " << cos(num1)<< cos(num2) << endl;//case8
	cout << "tan=  " << tan(num1)<< tan(num2) << endl;//case9
	cout << "inverse sin of num1: " << asin(num1) * 180.0 / pl<<"inverse sin of num2:"<< asin(num2) * 180.0 / pl << endl;//case10
	cout << "inverse cos of num1 : " << acos(num1) * 180.0 / pl << "inverse cos of num2:  " << acos(num2) * 180.0 / pl << endl;//case11
	cout << "inverse tan of num1: " << atan(num1) * 180.0 / pl << "inverse tan of num2: " << atan(num2) * 180.0 / pl << endl;//case12
	cout << "log  " << log(num1)<< log(num2) << endl;//case13
	cout << "log with base 10" << log10(num1)<< log10(num2) << endl;//case14
	cout << "factorial of num1:" << num1 << "=" << factorial <<"factorial of num2:"<<num2<<"="<<factorial<< endl;//case15
	cout << "table of num1:" << num1 << "=" << table << "table of num2:" << num2 << "=" << table << endl;//case16
	cout << "after swap a: \n" << num1 << "b:" << num2 << endl;//case17
	float store = operation(num1, num2);//calling the function and storing in store variable
}