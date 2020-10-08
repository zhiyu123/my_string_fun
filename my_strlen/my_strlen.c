#include<stdio.h>
#include<assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char* str1 = "hello world!";
	char* str2 = "nihao!";
	printf("len = %d\n", my_strlen(str1));
	printf("len = %d\n", my_strlen(str2));
	return 0;
}