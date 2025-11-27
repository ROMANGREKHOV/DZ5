#include <iostream>

int main() {
	int arr[]{ 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
	const int size = sizeof(arr) / sizeof(int);
	std::cout << "Массив до сортировки: ";
	for (int h = 0; h < size; h++) {
		std::cout << arr[h] << " ";
	}
	std::cout << '\n';
	for (int i = size - 1; i > 0; i--) {
		for (int j = size - 1; j > 0; j--) {
			if (arr[j] < arr[j - 1])
			{
				int b = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = b;
			}	
		}
	}
	std::cout << "Массив после сортировки: ";
	for (int h = 0; h < size; h++) {
		std::cout << arr[h] << " ";
	}

	return EXIT_SUCCESS;
}