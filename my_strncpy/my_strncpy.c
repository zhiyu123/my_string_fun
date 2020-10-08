#include<stdio.h>
#include<assert.h>

char* my_strncpy(char* dest, const char* source, int count)
{
	char* temp = dest;			//将目的字符串保存起来
	assert(dest != NULL);
	assert(source != NULL);
	int i = 0;
	while (i < count && *source != '\0')
	{
	    *dest = *source;
		dest++;
		source++;
		i++;
	}
	while (i < count)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return temp;
}

int main()
{
	char arr1[] = "hello world";
	char arr2[] = "nihao";
	printf("%s\n", my_strncpy(arr1, arr2, 5));
	return 0;
}