// ������������ ����������������� �������

#include <iostream>
#include "MyMatrix.h"


int main()
{
	TMatrix<int> a(5), b(5), c(5);
	int i, j;

	setlocale(LC_ALL, "Russian");
	cout << "������������ �������� ��������� ������������� ����������� ������"
		<< endl;
	for (i = 0; i < 5; i++)
		for (j = i; j < (i + 1); j++)
		{
			a[i][j] = i * 10 + j;
			b[i][j] = (i * 10 + j) * 100;
		}
	c = b + a;
	cout << "Matrix a = " << endl << a << endl;
	cout << "Matrix b = " << endl << b << endl;
	cout << "Matrix c = a + b" << endl << c << endl;

	return 0;
}
