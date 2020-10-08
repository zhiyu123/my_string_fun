#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;			//将目的字符串保存起来
	while (*dest++ = *src++)	//将源字符串复制到目标字符串，直到\0拷贝过去后，整个表达式的值为0，退出循环
	{
		;
	}
	return temp;
}

int main()
{
	char str1[] = "hello world!";
	char str2[] = "nihao!";
	printf("str1 = %s\n", my_strcpy(str1, str2));
	return 0;
}