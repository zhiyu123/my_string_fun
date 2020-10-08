#include<stdio.h>
#include<assert.h>

int my_strncmp(const char* arr1, const char* arr2, int count)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	int i = 0;
	while (*arr1 == *arr2 && i < count)
	{
		arr1++;
		arr2++;
		i++;
	}
	if (i >= count)
		return 0;				//相等返回0；
	else
	{
		return *arr1 - *arr2;		//arr1>arr2 返回值>0,否则，反之
	}
}

int main()
{
	char arr1[] = "hbnt";
	char arr2[] = "hcn";
	printf("%d\n", my_strncmp(arr1, arr2, 2));
	return 0;
}