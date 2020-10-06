#include <iostream>
using namespace std;

void pola1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
void pola2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j < n - i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
void pola3(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
void pola4(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j <= i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
void pola5(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * i) + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
void pola6(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * n) - (i * 2) - 1; j++)
		{
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
void pola7(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			for (int j = 0; j < n - i; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < (2 * i) + 1; j++)
			{
				cout << "*";
			}
			cout << "\n";
		}
		else
		{
			for (int j = 0; j <= i; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < (2 * n) - (i * 2) - 1; j++)
			{
				{
					cout << "*";
				}
			}
			cout << "\n";
		}
	}
}

int main()
{
	int n;
	cout << "Masukkan panjang pola: ";
	cin >> n;

	cout << "\nPola 1\n";
	pola1(n);

	cout << "\nPola 2\n";
	pola2(n);

	cout << "\nPola 3\n";
	pola3(n);

	cout << "\nPola 4\n";
	pola4(n);

	cout << "\nPola 5\n";
	pola5(n);

	cout << "\nPola 6\n";
	pola6(n);

	cout << "\nPola 7\n";
	pola7(n);

	cin.get();
	return 0;
}
