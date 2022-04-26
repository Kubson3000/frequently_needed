#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void losowo(int& x);
void wczytaj(int& x);
void wypisz(int x);
int min(int x, int y);
int max(int x, int y);
int suma(int x, int y);
int roznica(int x, int y);
int iloraz(int x, int y);
void zamiana(int& x, int& y);
bool czyparzysta(int x);
bool czypodzielna(int liczba, int przezco);
void zadanie();

int main() {
	srand(time(NULL));
	return 0;
}

void losowo(int& x) {
	int min = 1, max = 100;
	x = min + rand() % (min - max - 1);
}
void wczytaj(int& x) {
	cout << "Podaj liczbe: ";
	cin >> x;
}
void wypisz(int x) {
	cout << "Liczba wynosi: " << x << endl;
}
int min(int x, int y) {
	return (x < y) * x + (x >= y) * y;
}
int max(int x, int y) {
	return (x > y) * x + (x <= y) * y;
}
int suma(int x, int y) {
	return x + y;
}
int roznica(int x, int y) {
	return x - y;
}
int iloraz(int x, int y) {
	if (y != 0) {
		return x / y;
	}
	else return y;
}
void zamiana(int& x, int& y) {
	int temp;
	temp = y;
	y = x;
	x = temp;
}
bool czyparzysta(int x) {
	return x % 2 == 0;
}
bool czypodzielna(int liczba, int przezco) {
	return liczba % przezco == 0;
}
void zadanie() {
	const int length = 100;
	int tabi[length];
	
	// 1
	for (int i = 0; i < 5; i++) {
		wczytaj(tabi[i]);
	}

	// 2
	for (int i = 5; i < length; i++) {
		losowo(tabi[i]);
	}

	// 3
	for (int i = 0; i < length; i++) {
		wypisz(tabi[i]);
	}

	// 4
	int minimum = 100, maksimum = 0;
	for (int i = 0; i < length; i++) {
		minimum = min(tabi[i], minimum);
		maksimum = max(tabi[i], maksimum);
	}
	cout << "Min: " << minimum << endl << "Max: " << maksimum << endl;

	// 5
	zamiana(tabi[0], tabi[1]);

	// 6
	for (int i = 0; i < length; i++) {
		cout << "Element o index'ie " << i << " jest ";
		if (czyparzysta(tabi[i])) cout << "parzysta";
		else cout << "nieparzysta";
		cout << " i jest ";
		if (czypodzielna(tabi[i], 3)) cout << "podzielna";
		else cout << "niepodzielna";
		cout << " przez 3" << endl;
	}

	// 7
	int x, y;
	cout << "Podaj pierwszy index tablicy [0-99]: ";
	cin >> x;
	cout << "Podaj drugi index tablicy [0-99]: ";
	cin >> y;
	cout << "Suma = " << suma(tabi[x], tabi[y]) << endl;
}
