#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter the number of employees (up to 20): ";
	cin >> size;

	if (size <= 0 || size > 20) {
		cout << "Invalid size! Please enter a number between 1 and 20." << endl;
		return 1;
	}

	// Dynamically allocate memory for salaries
	int* salArray = new int[size];

	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> salArray[i];
	}

	// Apply increment formula twice (as in your original code)
	for (int i = 0; i < size; i++) {
		salArray[i] = salArray[i] + salArray[i] / (i + 1);
	}
	for (int i = 0; i < size; i++) {
		salArray[i] = salArray[i] + salArray[i] / (i + 1);
	}

	// Display updated salaries
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << salArray[i] << " ";
	}
	cout << endl;

	// Free the allocated memory
	delete[] salArray;

	return 0;
}
