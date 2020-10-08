#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;		//将目标字符串的起始地址保存起来
	while (*dest != '\0') //找到目标字符串的末尾
	{
		dest++;
	}
	while (*dest++ = *src++)//开始拷贝，最后将源字符串的\0拷贝到目标字符串后，整个表达式的值为\0的ascii，即0，跳出循环
	{						
		;
	}
	return temp;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[20] = "world!";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}