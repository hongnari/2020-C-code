#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct account {

	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void) {
	struct account me = { { 2018,3,9},"홍길동",1001,300000 };

	printf("备炼眉农扁: %d\n", sizeof(me));
	printf("[%d,%d,%d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);




}
