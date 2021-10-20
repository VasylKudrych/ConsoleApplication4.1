#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	double a;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 1;
	k = N;
	while (k <= 25)
	{
		a = sqrt(1 + (N / k));
		k++;
	}
	cout << P << endl;
	P = 1;
	k = N;
	do {
		a = sqrt(1 + (N / k));
		P = k++;
	} while (k <= 25);
	cout << P << endl;
	P = 1;
	for (k = N; k <= 25; k++)
	{
		a = sqrt(1 + (N / k));
	}
	cout << P << endl;
	P = 1;
	for (k = N; k >= 25; k--)
	{
		a = sqrt(1 + (N / k));
	}
	cout << P << endl;
	return 0;
}