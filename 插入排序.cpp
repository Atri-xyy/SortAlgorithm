#include <iostream>

using namespace std;

int main(void) {//InsertSort
	int arr[] = { 63,44,38,81,47,15,36,27,77,46 };
	cout << "ԭʼ����:   ";
	for (auto num : arr) {
		cout << num << " ";
	}
	cout << endl;
	int len = sizeof(arr) / sizeof(arr[0]);
	int tmp, i, j;//Ĭ�������һ����Ϊ����õ���.�����������ǰ������
	for (i = 1; i < len; i++) {
		tmp = arr[i];//tmp = ����ĵ�һ����24���±� �±��0��ʼ
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--) {//��һ�� j = ����ĵ�0�������±� ����һ����(�±�Ϊ0)����tmp(�±�Ϊ1)
			arr[j + 1] = arr[j];//���2����(�±�Ϊ1) = ��һ����(�±�Ϊ0)
		}
		arr[j + 1] = tmp;
		cout << "��" << i << "�������:";
		for (auto num : arr) {
			cout << num << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;

}