// лаба 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A, B, C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	cout << "AC=" << C - A << "\n";
	cout << "BC=" << B - C << "\n";
	cout << "AC*BC=" << (C - A) * (B - C) << "\n";

}
