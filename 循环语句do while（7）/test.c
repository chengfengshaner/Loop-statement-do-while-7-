//��д���룬��ʾ����ַ��������ƶ������м���
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to CHINA!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;//char arr[] = "abc"(\n)

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
		//Sleep(1000);//˯��1s
		//system("cls");//�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}