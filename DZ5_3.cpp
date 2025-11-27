//#include <iostream>
//
//int main() {
//	const int rows = 3, columns = 6;
//	int arr[rows][columns] = { {1,2,3,4,5,6},
//							  {7,8,9,10,11,12},
//							  { 13,14,15,16,17,18 } };
//	std::cout << "Массив:";
//	int max1 = arr[0][0], max2 = arr[0][0], max3 = arr[0][0], min1 = arr[0][0], min2 = arr[0][0], min3 = arr[0][0];
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < columns; j++) {
//			if (j % 6 == 0) {
//				std::cout << '\n';
//			}
//			std::cout << i << j;
//			if (arr[i][j] < min1) {
//				min1 = arr[i][j];
//				min2 = i;
//				min3 = j;
//			}
//			if (arr[i][j] > max1) {
//				max1 = arr[i][j];
//				max2 = i;
//				max3 = j;
//			}
//			std::cout << arr[i][j] << '\t';
//		}
//	}
//	std::cout << '\n';
//	std::cout << "Индекс минимального элемента: " << min2 << " " << min3 << '\n';
//	std::cout << "Индекс максимального элемента: " << max2 << " " << max3 << '\n';
//
//
//	return EXIT_SUCCESS;
//}