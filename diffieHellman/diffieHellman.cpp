#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


long long powmod(long long a, long long b, long long c);
long long powmodfast(long long a, long long b, long long c);
long long inuMod(long long a, long long b);

int main()
{
	
	/*long long p, g, a, A, B, k;
	cout << "p: ";
	cin >> p;
	cout << "g: ";
	cin >> g;
	cout << "a: ";
	cin >> a;

	A = powmod(g, a, p);
	cout << "A: " << A << endl;
	cout << "B: ";
	cin >> B;

	k = powmod(B, a, p);

	cout << k;*/


	inuMod(5, 11);

	system("pause");
}











long long inuMod(long long a, long long b)
{
	vector<long long> r;
	vector<long long> s;
	vector<long long> g;
	if (a > b)
	{
		r.push_back(a);
		r.push_back(b);
		s.push_back(1);
		s.push_back(0);
	}
	else
	{
		r.push_back(b);
		r.push_back(a);
		s.push_back(0);
		s.push_back(1);
	}
	

	long i = 2;

	while (r[i] != 1 || r[i] != 0)
	{
		r.push_back(r[i] / r[i - 1]);

	}
}


























long long powmod(long long a, long long b, long long c) {
	long long wynik = a % c;

	for (long long i = 1; i < b; i++) {
		wynik = (a * wynik) % c;
	}
	return wynik;
}

long long powmodfast(long long a, long long b, long long c) {
	string bin = "";
	long long temp = b;
	while (temp != 0) {
		if (temp % 2 == 0) {
			bin = bin + "0";
		}
		else {
			bin = bin + "1";
		}
		temp = temp / 2;
	}


	long long wynik = 1;
	long long pom[100];
	pom[0] = a;
	for (long long i = 1; i < bin.length(); i++) {
		pom[i] = (pom[i - 1] * pom[i - 1]) % c;
	}

	for (long long i = 0; i < bin.length(); i++) {
		if (bin[i] == '1') {
			wynik = (wynik*pom[i]) % c;
		}
	}
	return wynik;
}

