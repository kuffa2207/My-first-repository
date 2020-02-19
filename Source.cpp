#include <iostream>
#include <fstream>
#include <clocale>                                  
#include "Header.h"

using namespace std;

/* ���������� ������ ����������� ����� */



int main() {
	Complex c0, c1(4.0, 2.0), c2(-3.0, 8.0), c3(c1), c4(6.2);
	// ��������� �� ����������� ����� (� ����� ����� ������� �����������)
	Complex* pc0 = new Complex();                        // �� ���������
	Complex* pc1 = new Complex(1.1, 2.2);                // �������������
	Complex* pc3 = new Complex(c1);                      // �����������
	Complex* pc4 = new Complex(3.3);                     // �������������� ����

	// ������ ������������� ������� ������
	cout << "The number created by the default constructor: c0 = "; // �����, ��������� ������������� �� ���������
	c0.output();
	cout << "Number created by the initialization constructor: c1 = "; //�����, ��������� ������������� �������������
	c1.output();
	cout << "Number created by the initialization constructor: c2 = "; //�����, ��������� ������������� �������������
	c2.output();
	cout << "Number created by the copy constructor: c3 = "; // �����, ��������� ������������� �����������:
	c3.output();
	cout << "Number created by the type conversion constructor: c4 = "; //�����, ��������� ������������� �������������� ����
	c4.output();

	Complex c5;
	c5 = c2;                                            // ���������� ������������ �������� ������������
	cout << "esult of applying the c2 assignment to a new variable: c5 = "; //��������� ���������� ������������ c2 ����� ���������� : �5 =
	c5.output();

	Complex c8;
	if (c1 == c2) {
		cout << "Values are equal ";
	}
	else {
		cout << "Values are not equal ";
	}
	c8.output();

	Complex c6;
	c6 = c3.Add(c2);                                    // ���������� ������� ��������
	cout << "Result of addition by the addition function: c6 = c3 + c2 = ";
	c6.output();

	Complex c7;
	c7 = c3 + c2;                                       // ���������� ������������ �������� ��������
	cout << "The result of the addition using the overloaded operator: c7 = c3 + c2 = ";
	c7.output();
	Complex c9;
	c9 = c3 * c3;
	cout << "multiplication = ";
	c9.output();
	Complex c10;
	c10 = c7 - c4;
	cout << "subtraction= ";
	c10.output();
	Complex c11;
	c11 = c1 / c2;
	cout << "division = ";
	c11.output();


	// ������ ����������� ��� ����������
	delete pc0;
	delete pc1;
	delete pc3;
	delete pc4;

	system("pause");
	return 0;                                         // <---- � �++ ���� return ����� �� ������ ������
}