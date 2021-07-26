#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void mergeAdd(int arr[], int left, int mid, int right,int *temp){ 
	/*int temp[64]={0};*/ 
	int i = left; //ָ�����������С��Ԫ��λ�� 
	int j = mid; //ָ���ұ�������С��Ԫ��λ�� 
	int k = 0; //��ʱ������±� 
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
	//�� temp �е����ݿ����� arr ������
	memcpy(arr+left, temp, sizeof(int) * (right - left + 1)); 
}
void mergeSort(int arr[], int left, int right, int* temp) 
{//�鲢���� �ֳ�С����
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
	printf("ִ�й鲢��:\n"); 
	for (int i = 0; i < len; i++) {
		printf("%d ", beauties[i]);
	}
	system("pause"); 
	return 0; 
}