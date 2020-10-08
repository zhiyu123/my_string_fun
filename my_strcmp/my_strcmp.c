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
			return 0;		//两个字符串相等，返回0
		}
		arr1++;
		arr2++;
	}
	return *arr1 - *arr2;	//如果arrq>arr2，返回>0的数，如果arr1<arr2,返回<0的数
}

int main()
{
	char arr1[] = "hello!";
	char arr2[] = "world!";
	printf("%d\n", my_strcmp(arr1, arr2));
	return 0;
}