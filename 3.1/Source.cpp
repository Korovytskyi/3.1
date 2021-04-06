#include "Date.h"
#include "Triad.h"
#include <Windows.h>
#include "Date.h"
int a;
int b;
int c;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triad a;
	cin >> a;
	a.incDay();
	Date a2;
	a2.Init(a);
	a2.Display();
	a2.incDay();
	a2.addDay();
	a2.Display();
	cout << " A++ " << endl;
	cout << a++ << endl;
	cout << " A-- " << endl;
	cout << a-- << endl;
	cout << " ++A " << endl;
	cout << ++a << endl;
	cout << " --A " << endl;
	cout << --a << endl;

}