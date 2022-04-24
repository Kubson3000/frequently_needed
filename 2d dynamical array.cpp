#include <iostream>
using namespace std;


void dynamic_2d(int w, int h) {
	int** plane;
	int* width;
	plane = new int*[h]; // 
	int counter = 1;
	for (int i = 0; i < h; i++) {
		width = new int[w]; // For every new level of int** new int* addres is created
		plane[i] = width;
		for (int j = 0; j < w; j++) {
			plane[i][j] = counter;
			counter++;
		}
	}
	for (int i = 0; i < h; i++) { // Prints out the dynamic 2d array
		for (int j = 0; j < w; j++) {
			cout << "[" << plane[i][j] << "]";
		}
		cout << "\n";
	}
	for (int i = 0; i < h; i++) { // Cleanup after usage of dynamical 2d array
		delete [] plane[i];
	}
	delete [] plane;
}

int main() {
	int x, y;
	cout << "Input width: ";
	cin >> x;
	cout << "Input height: ";
	cin >> y;
	dynamic_2d(x, y);
	return 0;
}
