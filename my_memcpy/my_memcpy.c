#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* source, int count)
{
	assert(dest != NULL);
	assert(source != NULL);
	void* temp = dest;
	while (count--)						//每次减一个数，即减一个字节
	{
		*(char*)dest = *(char*)source;		//强制转换为char*
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
	my_memcpy(arr2, arr1, sizeof(arr1)); //目的数组，源数组，要拷贝的字节大小
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	print(arr2, sz);
	printf("\n");
	return 0;
}