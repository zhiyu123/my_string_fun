#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;		//��Ŀ���ַ�������ʼ��ַ��������
	while (*dest != '\0') //�ҵ�Ŀ���ַ�����ĩβ
	{
		dest++;
	}
	while (*dest++ = *src++)//��ʼ���������Դ�ַ�����\0������Ŀ���ַ������������ʽ��ֵΪ\0��ascii����0������ѭ��
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