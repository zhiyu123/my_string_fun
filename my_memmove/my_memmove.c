#include<stdio.h>
#include<assert.h>

void* my_memmove(void* dest, const void* source, int count)
{
	void* temp = dest;
	assert(dest != NULL);
	assert(source != NULL);
	if (dest < source)				//��ǰ���󿽱�
	{
		while (count--)
		{
			*(char*)dest = *(char*)source;
			((char*)dest)++;
			((char*)source)++;
		}
	}
	else                          //�Ӻ���ǰ����
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)source + count);
		}
	}
	return temp;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8};
	my_memmove(arr, arr + 2, 16);
	return 0;
}