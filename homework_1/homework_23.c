#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char get_grade(int score);

int main(void)
{
	int score;
	char grade;
	printf("c��� ������ �Է��ϼ���: ");
	scanf("%d", &score);

	grade = get_grade(score);
	printf("����� ����� %c �Դϴ�.\n", grade);

	return 0;
}

char get_grade(int score)
{

	char grade;

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	return grade;
}