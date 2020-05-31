//file:strtok.c
#include <cstddef>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	char str1[] = "C and c++\t language are best!";
	char* delmiter = ",\t";
	//char *next_token;

	printf("문자열 \"%s\"을 >>\n", str1);
	printf("구분자[%s]를 이용하여 토큰을 추출>>\n", delmiter);
	char* ptoken = strtok(str1, delmiter);
	//char *ptoken = strtok_s(str,delimster,&next_token);
	while (ptoken != NULL)
	{
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delmiter);//다음 토큰을 반환
		//ptoken = strtok_s(NULL,delimiter,&next_token); //다음 토큰을 반환

	}
	return 0;
}
