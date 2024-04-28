#include <iostream>
using namespace std;
int main() {
	// Просто программа выводящая прямоугольник
	setlocale(LC_ALL, "RUS");
	int height, width;
	cout << "Введите высоту: ";
	cin >> height;
	cout << "Введите ширину: ";
	cin >> width;
	for (int i = 1; i <= height; i++) {
		if (i == 1 || i == height) {
			for (int j = 1; j <= width; j++) {
				cout << '*';
			}
		}
		else {
			for (int j = 1; j <= width; j++) {
				if (j == 1 || j == width) {
					cout << '*';
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << '\n';
	}
}