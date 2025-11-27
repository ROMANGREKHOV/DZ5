#include <iostream>

int main() {
	int arr[]{ 1,2,3,4,5,6,7,8,9,10 };
	std::cout << "Массив: ";
	int minn = arr[0], maxx = arr[0];
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		if (arr[i] < minn) {
			minn = arr[i];
		}
		if (arr[i] > maxx) {
			maxx = arr[i];
		}
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	std::cout << "Минимальный элемент: " << minn << '\n';
	std::cout << "Максимальный элемент: " << maxx;


	return EXIT_SUCCESS;

}
