#include <iostream>
#include <stdlib.h>
using namespace std;

int faktorial(int nilai) 
{
	if (nilai == 1) 
	{
		return 1;
	}
	else 
	{
		return nilai * faktorial(nilai - 1);
	}
}

int main() 
{
	do 
	{
		system("cls");
		cout << "Program Mencari Nilai Faktorial" << endl << endl;
		system("pause");
		system("cls");
		cout << "Masukkan Angka: ";
		int x, pilih;
		cin >> x;
		system("cls");
		cout << "Hasil Faktorial Dari " << x << " Adalah " << faktorial(x) << endl << endl;
		system("pause");
		system("cls");
		cout << "Keluar Program?" << endl << endl;
		cout << "1. Ya \n2. Tidak" << endl << endl;
		cout << "Pilihan: ";
		cin >> pilih;
		if (pilih == 1) 
		{
			break;
		}
		else if (pilih == 2) 
		{

		}
	} while (true);
}
