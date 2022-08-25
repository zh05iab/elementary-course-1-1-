#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{
	char a = 'b';//char数据类型占用一个字节，赋值给变量只能是ASCII表中的字符，不能用中文，不能用全角
	printf("%c\n",a);
	char arr[] = "hello world!";//char也可以创建字符串，但是用要用半角双引号""括起来，在printf中用%s表示
	printf("%s\n",arr);
	return 0;
}
