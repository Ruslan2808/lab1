#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите размер матрицы: ";
	cin >> n;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
	}
	cout << "Введите элементы матрицы : " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mas[i][j];
		}
	}
	int tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mas[i][n - i - 1] > mas[j][n - j - 1]) {
				tmp = mas[i][n - i - 1];
				mas[i][n - i - 1] = mas[j][n - j - 1];
				mas[j][n - j - 1] = tmp;
			}
		}
	}
	cout << endl << "Матрица: ";
	for (int i = 0; i < n; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << setw(3) << mas[i][j] << " ";
		}
	}
	for (int i = 0; i < n; i++) {
		delete mas[i];
	}
	delete[] mas;
	cout << endl;
	return 0;
}