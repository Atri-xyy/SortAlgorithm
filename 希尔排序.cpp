#include <iostream>

using namespace std;

int main(void) {//ShellSort
	int arr[] = { 37,24,58,64,77,11,30,29,88,56 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	for (int increment = len / 2; increment > 0; increment = increment / 2) {
		for ( i = increment; i < len; i++) {
			int tmp = arr[i];
			for (j = i - increment; j >= 0 && arr[j] > tmp; j-= increment) {
				arr[j + increment] = arr[j];
			}
			arr[j + increment] = tmp;
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}