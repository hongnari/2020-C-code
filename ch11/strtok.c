//file:strtok.c
#include <cstddef>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	char str1[] = "C and c++\t language are best!";
	char* delmiter = ",\t";
	//char *next_token;

	printf("���ڿ� \"%s\"�� >>\n", str1);
	printf("������[%s]�� �̿��Ͽ� ��ū�� ����>>\n", delmiter);
	char* ptoken = strtok(str1, delmiter);
	//char *ptoken = strtok_s(str,delimster,&next_token);
	while (ptoken != NULL)
	{
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delmiter);//���� ��ū�� ��ȯ
		//ptoken = strtok_s(NULL,delimiter,&next_token); //���� ��ū�� ��ȯ

	}
	return 0;
}
