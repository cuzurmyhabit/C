#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("�� ������ ���� �Է�: ");
	scanf("%d %d %d", &kor, &eng, &mat);

	print_title();

	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("%d\t%d\t%d\t%d\t%.2lf", kor, eng, mat, tot, avg);
	return 0;
}

int total(int kor, int eng, int mat)
{
	int total;
	total = kor + eng + mat;

	return total;
}

double average(int tot)
{
	double average;
	average = (double)(tot / 3);

	return average;
}

void print_title(void)
{
	printf("============== <����ǥ> ================\n");
	printf("----------------------------------------\n");
	printf("����\t����\t����\t����\t���\n");
	printf("----------------------------------------\n");
}