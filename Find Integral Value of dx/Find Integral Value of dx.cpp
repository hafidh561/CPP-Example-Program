#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	do
	{
		system("cls");
		cout << "Program Mencari Nilai Integral Terhadap dx \n\n";
		system("pause");
		system("cls");
		cout << "Masukkan Total Suku Yang Ada: ";
		unsigned short int Integral_Suku, Pilihan, PilihanVariabel, PilihanTanda, Integral_Koefisien[100], Pangkat[100], Rumus;
		string Integral_Total, Integral_Hasil, Variabel[100], Convert_Koefisien[100], Convert_Pangkat[100];
		cin >> Integral_Suku;
		system("cls");
		for (int x = 0; x < Integral_Suku; x++)
		{
			system("cls");
			cout << "Pilih Tanda \n\n1. Plus (+) \n2. Minus (-) \n\nPilihan: ";
			cin >> PilihanTanda;
			if (PilihanTanda == 1)
			{
				if ((PilihanTanda == 1) && (x != 0))
				{
					Integral_Total.append(" + ");
					Integral_Hasil.append(" + ");
				}
			}
			else if (PilihanTanda == 2)
			{
				Integral_Total.append(" - ");
				Integral_Hasil.append(" - ");
			}
			else
			{
				cout << "Anda Salah Memasukkan Input";
				system("pause");
				return 0;
			}
			system("cls");

			cout << "Masukkan Koefisien: ";
			cin >> Integral_Koefisien[x];
			system("cls");

			cout << "Apakah Memiliki Variabel? \n\n1. Iya \n2. Tidak \n\nPilihan: ";
			cin >> PilihanVariabel;
			if (PilihanVariabel == 1)
			{
				system("cls");
				cout << "Masukkan Variabel: ";
				cin >> Variabel[x];
				if ((Variabel[x] == "x") || (Variabel[x] == "X"))
				{
					Variabel[x] = "x";
				}
				else
				{
					cout << "Anda Salah Memasukkan Input";
					cout << endl;
					system("pause");
					return 0;
				}
				system("cls");
			}
			else if (PilihanVariabel == 2)
			{

			}

			else
			{
				cout << "Anda Salah Memasukkan Input";
				system("pause");
				return 0;
			}
			system("cls");

			cout << "Masukkan Pangkat: ";
			cin >> Pangkat[x];
			system("cls");

			if (PilihanTanda == 1)
			{
				if (PilihanVariabel == 1)
				{
					if (Pangkat[x] == 0)
					{
						Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
						Integral_Total.append(Convert_Koefisien[x]);

						Integral_Hasil.append(Convert_Koefisien[x]);
						Integral_Hasil.append("x");
					}
					else
					{
						if ((Integral_Koefisien[x] == 1) && (Pangkat[x] == 1))
						{
							Integral_Total.append(Variabel[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^2/2");
						}
						else if (Integral_Koefisien[x] == 1)
						{
							Integral_Total.append(Variabel[x]);
							Integral_Total.append("^");
							Convert_Pangkat[x] = to_string(Pangkat[x]);
							Integral_Total.append(Convert_Pangkat[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Pangkat[x] = stoi(Convert_Pangkat[x]);
							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
						else if (Pangkat[x] == 1)
						{
							Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
							Integral_Total.append(Convert_Koefisien[x]);
							Integral_Total.append(Variabel[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
						else
						{
							Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
							Integral_Total.append(Convert_Koefisien[x]);
							Integral_Total.append(Variabel[x]);
							Integral_Total.append("^");
							Convert_Pangkat[x] = to_string(Pangkat[x]);
							Integral_Total.append(Convert_Pangkat[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Pangkat[x] = stoi(Convert_Pangkat[x]);
							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
					}
				}

				else
				{
					Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
					Integral_Total.append(Convert_Koefisien[x]);

					Integral_Hasil.append(Convert_Koefisien[x]);
					Integral_Hasil.append("x");
				}
			}

			else if (PilihanTanda == 2)
			{
				if (PilihanVariabel == 1)
				{
					if (Pangkat[x] == 0)
					{
						Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
						Integral_Total.append(Convert_Koefisien[x]);

						Integral_Hasil.append(Convert_Koefisien[x]);
						Integral_Hasil.append("x");
					}
					else
					{
						if ((Integral_Koefisien[x] == 1) && (Pangkat[x] == 1))
						{
							Integral_Total.append(Variabel[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^2/2");
						}
						else if (Integral_Koefisien[x] == 1)
						{
							Integral_Total.append(Variabel[x]);
							Integral_Total.append("^");
							Convert_Pangkat[x] = to_string(Pangkat[x]);
							Integral_Total.append(Convert_Pangkat[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Pangkat[x] = stoi(Convert_Pangkat[x]);
							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
						else if (Pangkat[x] == 1)
						{
							Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
							Integral_Total.append(Convert_Koefisien[x]);
							Integral_Total.append(Variabel[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
						else
						{
							Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
							Integral_Total.append(Convert_Koefisien[x]);
							Integral_Total.append(Variabel[x]);
							Integral_Total.append("^");
							Convert_Pangkat[x] = to_string(Pangkat[x]);
							Integral_Total.append(Convert_Pangkat[x]);

							Integral_Hasil.append(Convert_Koefisien[x]);
							Integral_Hasil.append(Variabel[x]);
							Integral_Hasil.append("^");

							Pangkat[x] = stoi(Convert_Pangkat[x]);
							Rumus = Pangkat[x] + 1;
							Convert_Pangkat[x] = to_string(Rumus);
							Integral_Hasil.append(Convert_Pangkat[x]);
							Integral_Hasil.append("/");
							Integral_Hasil.append(Convert_Pangkat[x]);
						}
					}
				}
				else
				{
					Convert_Koefisien[x] = to_string(Integral_Koefisien[x]);
					Integral_Total.append(Convert_Koefisien[x]);

					Integral_Hasil.append(Convert_Koefisien[x]);
					Integral_Hasil.append("x");
				}
			}
			cout << Integral_Total << "\n\nApakah Benar? \n\n1. Iya \n2. Tidak \n\nPilihan: ";
			cin >> Pilihan;
			if (Pilihan == 1)
				continue;
			else if (Pilihan == 2)
				break;
			else
			{
				cout << "Anda Salah Memasukkan Input";
				cout << endl;
				system("pause");
				return 0;
			}
			system("cls");
		}
		Integral_Total.append(" dx");
		Integral_Hasil.append(" + c");
		system("cls");
		cout << "Hasil Dari " << Integral_Total << " Adalah " << Integral_Hasil << "\n\n";
		system("pause");
		system("cls");
		cout << "Apakah Anda Ingin Keluar? \n\n1. Iya \n2. Tidak \n\nPilihan: ";
		cin >> Pilihan;
		if (Pilihan == 1)
			return 0;
		else if (Pilihan == 2)
			continue;
		else
		{
			cout << "Anda Salah Memasukkan Input";
			cout << endl;
			system("pause");
			return 0;
		}
	} while (true);
}
