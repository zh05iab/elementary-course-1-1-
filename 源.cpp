#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{
	char a = 'b';//char��������ռ��һ���ֽڣ���ֵ������ֻ����ASCII���е��ַ������������ģ�������ȫ��
	printf("%c\n",a);
	char arr[] = "hello world!";//charҲ���Դ����ַ�����������Ҫ�ð��˫����""����������printf����%s��ʾ
	printf("%s\n",arr);
	return 0;
}
