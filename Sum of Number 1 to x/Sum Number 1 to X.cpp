#include <iostream>
using namespace std;
int main() 
{
	int ab[100]; 
	long long int batas, hasil = 0;
	cin >> batas;
	for (int x = 0; x < batas; x++) 
	{
		cin >> ab[x];
	}
	for (int x = 0; x < batas; x++)
	{
		hasil = hasil + ab[x];
	}
	cout << hasil;
}
