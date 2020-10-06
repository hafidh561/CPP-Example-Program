#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	do 
	{
		double vara, varb, hasil, pilihan;
		system("CLS");
		cout << "Program Perkalian 1 Sampai 10" << endl << endl;
		system("pause");
		system("CLS");
		cout << "1. Lanjutkan \n2. Keluar" << endl << endl;
		cout << "Pilih: ";
		cin >> pilihan;
		cout << endl;
		if (pilihan == 1)
		{
			system("CLS");
			cout << "Masukkan Angka: ";
			cin >> vara;
			for (varb = 1; varb < 11; varb++)
			{
				hasil = vara * varb;
				cout << vara << " x " << varb << " = " << hasil << endl;
			}
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan;
			cout << endl;
			if (pilihan == 1)
			{
				break;
			}
			else if (pilihan == 2)
			{

			}
		}
		else if (pilihan == 2)
		{

		}
	} while (true);
}

