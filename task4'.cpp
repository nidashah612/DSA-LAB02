#include <iostream>
#include <cstring>  // For strlen
using namespace std;

int main() {
	int length;

	cout << "Enter the length of the string: ";
	cin >> length;

	// Allocate memory dynamically (+1 for null terminator)
	char* str = new char[length + 1];

	cout << "Enter the string: ";
	cin.ignore(); // To ignore leftover newline from previous input
	cin.getline(str, length + 1);

	// Reverse the string in place
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}

	cout << "Reversed string: " << str << endl;

	// Free allocated memory
	delete[] str;

	return 0;
}
