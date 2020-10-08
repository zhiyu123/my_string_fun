#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* source, int count)
{
	assert(dest != NULL);
	assert(source != NULL);
	void* temp = dest;
	while (count--)						//ÿ�μ�һ����������һ���ֽ�
	{
		*(char*)dest = *(char*)source;		//ǿ��ת��Ϊchar*
		((char*)dest)++;
		((char*)source)++;
	}
	return temp;
}

void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1)); //Ŀ�����飬Դ���飬Ҫ�������ֽڴ�С
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	print(arr2, sz);
	printf("\n");
	return 0;
}