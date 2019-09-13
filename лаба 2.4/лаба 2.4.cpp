// лаба 2.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x1, x2, y1, y2, xx, yy;
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
	cin >> y2;
	xx = abs(x2 - x1);
	yy = abs(y2 - y1);
	cout << "P=" << 2 * (xx + yy) << "\n";
	cout << "S=" << xx * yy << "\n";

}



