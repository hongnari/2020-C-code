//file : staticlocal.c
#include <stdio.h>

void increment(void); //�Լ�����

int main(void)
{
	//�ڵ���������
	for (int count = 0; count < 3; count++)
		increment(); //3�� �Լ�ȣ��
}
void increment(void)
{
	static int sindext = 1; //���� ��������
	auto int aindext = 1; //�ڵ� ��������

	printf("���� �������� sindex: %2d,\t", sindext++);
	printf("�ڵ� �������� aindex: %2d\n", aindext++);

}