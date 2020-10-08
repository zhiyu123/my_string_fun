#include<stdio.h>
#include<assert.h>

int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1 == *arr2) 
	{
		if (*arr1 == '\0')   
		{
			return 0;		//�����ַ�����ȣ�����0
		}
		arr1++;
		arr2++;
	}
	return *arr1 - *arr2;	//���arrq>arr2������>0���������arr1<arr2,����<0����
}

int main()
{
	char arr1[] = "hello!";
	char arr2[] = "world!";
	printf("%d\n", my_strcmp(arr1, arr2));
	return 0;
}