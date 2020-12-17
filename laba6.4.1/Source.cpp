// Lab_06_4_1.cpp
// < Сорочак Станіслав >
// Лабораторна робота №6.4.1
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 24

#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void value_elements(double* a, const int size, double Low, int High)
{
	int p_index = 0;
	for (int index = p_index; index < size; index++)
	{
		int diapzon = 2;
		a[index] = Low * (rand() % (2 * High)) - diapzon;
	}
}
double Sum(double* a, const int size)
{
	double S = 0;
	int p_index = 0;
	for (int index = 0; index < size; index++)
	{
		if (a[index] > 0)
		{
			int k_index = size - 1;

			for (; a[k_index] < 0; k_index--);

			for (index++; index < k_index; index++)
				S += a[index];
			index = size;
		}
		else;
	}
	return S;
}

double Min(double* a, const int size)
{
	double min = a[0];
	int p_index = 0;
	for (int index = 0; index < size; index++)
		if (a[index] < min)
			min = a[index];
	return min;
}

void pokazaty(double* a, const int size)
{
	int p_index = 0;
	for (int index = p_index; index < size; index++)
		cout << std::setprecision(2) << setw(6) << a[index];
	cout << endl;
	cout << endl;
}

void pertvorennya(double* a, const int size)
{
	int pp_index = 0;
	double p_index = 0;
	int live = 0;
	for (int index = live; index < size; index++)
	{
		double value;
		value = a[index];
		if ((0 <= value && value < 1) || (-1 < value && value <= 0))
		{
			p_index = a[pp_index];
			a[pp_index] = a[index];
			a[index] = p_index;
			pp_index++;
		}
		else;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	int k_size;
	cout << "Ваша кількість елементів = ";
	cin >> k_size;
	cout << endl;
	const int size = k_size;
	double* a = new double[size];

	double Low = 0.01;
	int High = 200;

	value_elements(a, size, Low, High);

	cout << "масив: " << endl;
	cout << endl;
	pokazaty(a, size);

	cout << "мінімальний елемент = " << Min(a, size) << endl;

	double S = Sum(a, size);
	if (Sum == 0)
		cout << "не існує елемнтів за умовою: " << endl;
	else
		cout << "Сума елементів масиву, за умовою: " << S << endl;

	cout << "перестановка: " << endl;
	cout << endl;
	pertvorennya(a, size);
	pokazaty(a, size);

	delete[] a;
	return 0;
}
