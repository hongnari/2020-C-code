//file : strarray.c
#include <stdio.h>

int main(void) {
	char* pa[] = { "JAVA","C#","C++" };
	char ca[][5] = { "JAVA","C#","C++" };

	//각각의 3개 문자열 출력
	//pa[0][2] = 'v' ; //실행오류 발생
	//ca[0][2] = 'v' ; //수정가능
	
	printf("%s ", pa[0]); 	printf("%s ", pa[1]); 	printf("%s\n", pa[2]);
	printf("%s ", ca[0]);	printf("%s ", ca[1]);	printf("%s\n", ca[2]);
	
	//문자출력
	printf("%c %c %c\n", pa[0][1], pa[1][1], pa[2][1]);
	printf("%c %c %c\n", ca[0][1], ca[1][1], pa[2][1]);

	return 0;
}