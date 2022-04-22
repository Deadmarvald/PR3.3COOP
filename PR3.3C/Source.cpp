#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");

	cout << "Fraction count: " << Object::Count() << endl << endl;

	Money a(0, 0), b(0, 0);

	double x;

	cout << "Enter a value of \"a\":"; cin >> a;
	cout << "Enter a value of \"b\":"; cin >> b;

	Money c(a - b);
	cout << "�i��i����� ����: " << c;
	cout << endl << endl;

	cout << "��i� = "; cin >> x;
	cout << endl;

	Money d(a * x);
	cout << "���������� ��������: " << d;
	cout << endl << endl;

	cout << "���i������ ���: " << endl;

	if (a == b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " == "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a != b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " != "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a > b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " > "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a < b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " < "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a >= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " >= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	if (a <= b)
	{
		cout << a.GetHrn() << "," << a.GetKop() << " <= "
			<< b.GetHrn() << "," << b.GetKop() << endl << endl;
	}

	cout << "I��������/��������� � ���� ������: " << endl;

	cout << "a++: " << a++ << endl;
	cout << "res: " << a << endl;
	cout << "++a: " << ++a << endl;

	cout << "a--: " << a-- << endl;
	cout << "res: " << a << endl;
	cout << "--a: " << --a << endl;
	cout << endl;

	cout << "Fraction count: " << Object::Count() << endl << endl;

	system("pause");
	return 0;
}