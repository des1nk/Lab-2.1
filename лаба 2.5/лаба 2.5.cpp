// лаба 2.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x1, x2, x3, y1, y2, y3;
	float P, S, a, b, c;
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
	cin >> y2;
	cout << "x3=";
	cin >> x3;
	cout << "y3=";
	cin >> y3;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = (a + b + c) / 2;
	S = sqrt(P*(P - a)*(P - b)*(P - c));
	cout << "P=" << P << "\n";
	cout << "S=" << S;
}


