#include<stdio.h>
#include<assert.h>

char* my_strncat(char* dest, const char* source, int count)
{
	assert(dest != NULL);
	assert(source != NULL);
	int i = 0;
	char* temp = dest;		//��Ŀ���ַ�����������
	while (*dest != '\0')
	{
		dest++;
	}
	while ( *source != '\0' && i < count)		//��Դ���Ƶ�Ŀ��
	{
		*dest = *source;
		dest++;
		source++;
		i++;
	}
	*dest = '\0';			//������Ŀ���ַ���һ��\0
	return temp;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s\n", my_strncat(arr1, arr2, 5));
	return 0;
}