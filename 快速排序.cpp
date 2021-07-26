#include <iostream>
#include <vector>
using namespace std;
int partition(int arr[], int low, int high) {
	int temp = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] >= temp)  high--; 
		arr[low] = arr[high];
		while (low < high && arr[low] <= temp)  low++;
		arr[high] = arr[low];
	}
	arr[low] = temp;
	return low;

}
void QuickSort(int* arr, int low, int high){
	if (low < high) {
		int index = partition(arr, low, high);
		QuickSort(arr, low, index - 1);
		QuickSort(arr, index + 1, high);
	}
}
/*void swap(vector<int>& arr, int num1, int num2) {
	int temp = arr[num1];
	arr[num1] = arr[num2];
	arr[num2] = temp;
}*/
int  quicksort_dem(vector<int>& arr,int low,int high) {
	int temp = arr[low];
	while (low < high) {

		while (low < high && temp <= arr[high]) high--;
		arr[low] = arr[high];
		while (low < high && arr[low] <= temp)low++;
		arr[high] = arr[low];
	}
	arr[low] = temp;
	return low;
}
void QuickSort_dem(vector<int>& arr, int low, int high) {
	if (low < high) {
		int index = quicksort_dem(arr, low, high);
		QuickSort_dem(arr, low, index - 1);
		QuickSort_dem(arr, index + 1, high);
	}
}

void quickSort(vector<int>& arr, int l, int r) {
	if (l >= r)return;
	int x = arr[l], i = l - 1, j = r + 1;
	while (i < j) {
		do i++; while (arr[i] < x);
		do j--; while (arr[j] > x);
		if (i < j)swap(arr[i], arr[j]);
	}
	quickSort(arr, l, j);
	quickSort(arr, j + 1, r);
}
int main(void) {
	vector<int>arr_demo= { 37,25,14,69,26,77,89,13,44,68 };
	quickSort(arr_demo, 0, arr_demo.size() - 1);
	for (auto i : arr_demo) {
		cout << i << " ";
	}
	int arr[] = { 37,25,14,69,26,77,89,13,44,68 };
	QuickSort(arr, 0, 9);
	/*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}*/
	system("pause");
	return 0;
}
