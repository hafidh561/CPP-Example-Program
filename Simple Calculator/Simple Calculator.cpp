#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	do 
	{
		long double variabela, variabelb;
		long long int moda, modb, pilihan, pilihan2;
		system("CLS");
		cout << "Kakulator Dasar 2 Variabel" << endl << endl;
		system("pause");
		system("CLS");
		cout << "Pilih Pengoperasian" << endl << endl;
		cout << "1. Penjumlahan (+) \n2. Pengurangan (-) \n3. Perkalian (x) \n4. Pembagian (/) \n5. Modulus (%) \n6. Keluar Kalkulator \n" << endl;
		cout << "Pilih: ";
		cin >> pilihan;
		if (pilihan == 1)
		{
			system("CLS");
			cout << "Anda Memilih Penjumlahan" << endl << endl;
			cout << "Masukkan Angka Pertama: ";
			cin >> variabela;
			cout << "Masukkan Angka Kedua: ";
			cin >> variabelb;
			long double hasilpenjumlahan = variabela + variabelb;
			cout << endl;
			cout << variabela << " + " << variabelb << " = " << hasilpenjumlahan;
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Kalkulator?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1) 
			{
				break;
			}
			else if (pilihan2 == 2) 
			{
				
			}
		}
		else if (pilihan == 2)
		{
			system("CLS");
			cout << "Anda Memilih Pengurangan" << endl << endl;
			cout << "Masukkan Angka Pertama: ";
			cin >> variabela;
			cout << "Masukkan Angka Kedua: ";
			cin >> variabelb;
			long double hasilpengurangan = variabela - variabelb;
			cout << endl;
			cout << variabela << " - " << variabelb << " = " << hasilpengurangan;
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Kalkulator?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else if (pilihan == 3)
		{
			system("CLS");
			cout << "Anda Memilih Perkalian" << endl << endl;
			cout << "Masukkan Angka Pertama: ";
			cin >> variabela;
			cout << "Masukkan Angka Kedua: ";
			cin >> variabelb;
			long double hasilperkalian = variabela * variabelb;
			cout << endl;
			cout << variabela << " x " << variabelb << " = " << hasilperkalian;
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Kalkulator?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else if (pilihan == 4)
		{
			system("CLS");
			cout << "Anda Memilih Pembagian" << endl << endl;
			cout << "Masukkan Angka Pertama: ";
			cin >> variabela;
			cout << "Masukkan Angka Kedua: ";
			cin >> variabelb;
			long double hasilpembagian = variabela / variabelb;
			cout << endl;
			cout << variabela << " / " << variabelb << " = " << hasilpembagian;
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Kalkulator?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else if (pilihan == 5)
		{
			system("CLS");
			cout << "Anda Memilih Modulus" << endl << endl;
			cout << "Masukkan Angka Pertama: ";
			cin >> moda;
			cout << "Masukkan Angka Kedua: ";
			cin >> modb;
			int hasilmod = moda % modb;
			cout << endl;
			cout << moda << " % " << modb << " = " << hasilmod;
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Kalkulator?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else 
		{
			break;
		}
	} while (true);
	
}
