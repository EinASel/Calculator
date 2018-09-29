//============================================================================
// Name        : Calculator.cpp
// Author      : Ein Sel
// Version     : V.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add (int, int);
int sub (int, int);
int mult (int, int);
int divi (int, int);
int power (int, int);

int main() {
	int x;
	int x2;
	char op;
	cout << "Enter your first number" << endl;
	cin >> x;
	cout << "Now enter your second number" << endl;
	cin >> x2;
	cout << "Now enter your operation (+, -, *, /, ^)" << endl;
	cin >> op;

	if (op == '+'){
		cout << add(x, x2);
	}

	else if (op == '-'){
		cout << sub (x, x2);
	}

	else if (op == '*'){
		cout << mult (x, x2);
	}

	else if (op == '/'){
		cout << divi (x, x2);
	}

	else if (op == '^'){
		cout << power (x, x2);
	}

	else {
		cout << "Please enter correct operation" << endl;
	}

	return 0;
}

int add (int a, int b){
	return a+b;
}

int sub (int a, int b){
	return a-b;
}

int mult (int a, int b){
	return a*b;
}

int divi (int a, int b){
	return a/b;
}

int power (int a, int b){
	int z = 1;
	for (int x = b; x > 0 ; x --){
		z = z*a;
	}
	return z;
}
