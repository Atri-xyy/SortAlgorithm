#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void mergeAdd(int arr[], int left, int mid, int right,int *temp){ 
	/*int temp[64]={0};*/ 
	int i = left; //指向左边数组最小的元素位置 
	int j = mid; //指向右边数组最小的元素位置 
	int k = 0; //临时数组的下标 
	while (i < mid && j <= right)
	{
		if (arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}	
	while(i< mid)
		{ 
			temp[k++] = arr[i++]; 
		}
	while(j<= right)
		{ 
			temp[k++] = arr[j++];
		}
	//把 temp 中的内容拷贝到 arr 数组中
	memcpy(arr+left, temp, sizeof(int) * (right - left + 1)); 
}
void mergeSort(int arr[], int left, int right, int* temp) 
{//归并排序 分成小部分
	int mid = 0; 
	if(left < right)
	{ 
		mid = left +(right - left)/2;
		mergeSort(arr, left, mid, temp);
		mergeSort(arr, mid + 1, right, temp); 
		mergeAdd(arr, left, mid + 1, right, temp);
	} 
}
int main(void) {
	int beauties[] = { 10, 1, 37, 12, 2, 80, 5, 67 };
	int len = sizeof(beauties) / sizeof(beauties[0]); 
	int* temp = new int[len];
	//int mid = len/2;
	mergeSort(beauties, 0, len - 1, temp); //mergeAdd(beauties, 0, mid, len-1, temp);
	printf("执行归并后:\n"); 
	for (int i = 0; i < len; i++) {
		printf("%d ", beauties[i]);
	}
	system("pause"); 
	return 0; 
}