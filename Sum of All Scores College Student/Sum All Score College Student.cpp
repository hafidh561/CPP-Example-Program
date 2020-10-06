#include <iostream>
using namespace std;
int main() 
{
	int nilai1[3], nilai2[3], nilai3[3], nilai4[3], nilai5[3];
	int jumlah1, jumlah2, jumlah3, jumlah4, jumlah5;
	cout << "Mahasiswa 1" << endl;
	//nilai1
	for (int i = 0; i < 3; i++) {
		cout << "masukkan nilai ke " << i + 1 << ": ";
		cin >> nilai1[i];
	}
	jumlah1 = 0;
	for (int i = 0; i < 3; i++) 
	{
		jumlah1 = jumlah1 + nilai1[i];
	}
	cout << "Mahasiswa 2" << endl;
	///nilai2
	for (int i = 0; i < 3; i++) {
		cout << "masukkan nilai ke " << i + 1 << ": ";
		cin >> nilai2[i];
	}
	jumlah2 = 0;
	for (int i = 0; i < 3; i++)
	{
		jumlah2 = jumlah2 + nilai2[i];
	}
	cout << "Mahasiswa 3" << endl;
	//nilai3
	for (int i = 0; i < 3; i++) {
		cout << "masukkan nilai ke " << i + 1 << ": ";
		cin >> nilai3[i];
	}
	jumlah3 = 0;
	for (int i = 0; i < 3; i++)
	{
		jumlah3 = jumlah3 + nilai3[i];
	}
	cout << "Mahasiswa 4" << endl;
	//nilai4
	for (int i = 0; i < 3; i++) {
		cout << "masukkan nilai ke " << i + 1 << ": ";
		cin >> nilai4[i];
	}
	jumlah4 = 0;
	for (int i = 0; i < 3; i++)
	{
		jumlah4 = jumlah4 + nilai4[i];
	}
	cout << "Mahasiswa 5" << endl;
	//nilai5
	for (int i = 0; i < 3; i++) {
		cout << "masukkan nilai ke " << i + 1 << ": ";
		cin >> nilai5[i];
	}
	jumlah5 = 0;
	for (int i = 0; i < 3; i++)
	{
		jumlah5 = jumlah5 + nilai5[i];
	}
	cout << "jumlah seluruhnya: " << jumlah1 / 3 << endl;
	cout << "jumlah seluruhnya: " << jumlah2 / 3 << endl;
	cout << "jumlah seluruhnya: " << jumlah3 / 3 << endl;
	cout << "jumlah seluruhnya: " << jumlah4 / 3 << endl;
	cout << "jumlah seluruhnya: " << jumlah5 / 3 << endl;
}
