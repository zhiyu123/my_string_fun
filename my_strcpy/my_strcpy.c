#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;			//��Ŀ���ַ�����������
	while (*dest++ = *src++)	//��Դ�ַ������Ƶ�Ŀ���ַ�����ֱ��\0������ȥ���������ʽ��ֵΪ0���˳�ѭ��
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