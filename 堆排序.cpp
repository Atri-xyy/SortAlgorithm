#include <iostream>


void HeapAdjust(int* arr, int start, int end) { //调整堆
	int temp = arr[start];
	for (int i = start * 2 + 1; i < end; i = i * 2 + 1) {
		if (i < end - 1 && arr[i] < arr[i + 1]) {
			i++;
		}
		if (arr[i] > arr[start]) {
			arr[start] = arr[i];
			start = i;
		}
		else {
			break;
		}
		arr[start] = temp;
	}
}
void HeapSort(int* arr, int len) {
	int i;
	for (i = (len - 1) / 2; i >= 0; i--) {
		HeapAdjust(arr, i, len);
	}
}
int main(void) {
	int arr[] = { 5,2,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, len);//初始化大顶堆
	for (auto i : arr) {
		std::cout << i << " ";
	}
	for (int i = len - 1; i >= 0; i--) {
		
		std::swap(arr[0], arr[i]);
		HeapAdjust(arr, 0, i);
	}
	std::cout << std::endl;
	for (auto i : arr) {
		std::cout << i << " ";
	}
	return 0;
}