#include <iostream>

using namespace std;
int main(void) {//BubbleSort
	int arr[] = { 37,24,58,64,77,11,30,29,88,56 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}