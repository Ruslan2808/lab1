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
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mas[j][n - 1 - j] < mas[i][n - 1 - i]) {
				int tmp = mas[j][n - 1 - j];
				mas[j][n - 1 - j] = mas[i][n - 1 - i];
				mas[i][n - 1 - i] = tmp;
			}
		}
	}
	cout << "Массив: ";
	for (int i = 0; i < n; i++) {
		cout << endl;
		for (int j = 0; j < n; j++) {
			cout << mas[i][j] << " ";
		}
	}
	for (int i = 0; i < n; i++) {
		delete mas[i];
	}
	delete[] mas;
	return 0;
}