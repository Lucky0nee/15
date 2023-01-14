#include <iostream>
#include <array>

using namespace std;

int main() {
	srand(time(NULL));
	array<double, 10> arr;
	double sum = 0;
	cout << "Елементи масива: ";

	for (int i = 0; i < arr.size(); i++) {
		arr[i] = (rand() % 100 - 50) / 10.0;
		cout << arr[i] << " ";

		if (arr[i] < 0)
			sum = sum + arr[i];
	}
	cout << "\nСума вiд'ємних елементів: " << sum;
}
