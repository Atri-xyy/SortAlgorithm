#include <iostream>

using namespace std;

int main(void) {
	int arr[] = { 37,24,58,64,77,11,30,29,88,56 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++) {//执行n-1步选择.因为数组下标是从0开始.且要选择一个数
		int max = 0;
		for (int j = 1; j < len - i; j++) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}
		if (max != len - i - 1) {
			int temp = arr[max];
			arr[max] = arr[len - i - 1];
			arr[len - i - 1] = temp;
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	int a = 2.1;
	int b = 1.9;
	cout <<a/b << endl;
	system("pause");
	return 0;
}