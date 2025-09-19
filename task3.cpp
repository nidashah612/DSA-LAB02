#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
	cout << "Memory address: " << ptr << endl;
	cout << "Value at memory address: " << *ptr << endl;
}

int main() {
	// Part 2 - Stack variable
	int iValue = 42;
	cout << "Analyzing stack variable:" << endl;
	analyze_pointer(&iValue);

	cout << endl;

	// Part 2 - Heap variable
	int* heapValue = new int;
	*heapValue = 100;
	cout << "Analyzing heap variable:" << endl;
	analyze_pointer(heapValue);

	// Free heap memory
	delete heapValue;

	return 0;
}
