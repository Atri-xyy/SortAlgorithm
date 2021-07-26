#include <iostream>

using namespace std;

int main(void) {//InsertSort
	int arr[] = { 63,44,38,81,47,15,36,27,77,46 };
	cout << "原始序列:   ";
	for (auto num : arr) {
		cout << num << " ";
	}
	cout << endl;
	int len = sizeof(arr) / sizeof(arr[0]);
	int tmp, i, j;//默认数组第一个数为排序好的数.将后面的数往前面排序
	for (i = 1; i < len; i++) {
		tmp = arr[i];//tmp = 数组的第一个数24的下标 下标从0开始
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--) {//第一趟 j = 数组的第0个数的下标 若第一个数(下标为0)大于tmp(下标为1)
			arr[j + 1] = arr[j];//则第2个数(下标为1) = 第一个数(下标为0)
		}
		arr[j + 1] = tmp;
		cout << "第" << i << "趟排序后:";
		for (auto num : arr) {
			cout << num << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;

}