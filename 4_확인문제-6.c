#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;
	double time = 3.76;

	hour = (int)time;
	min = (time - hour) * 60;

	min = (int)time;

	sec = (time - min) * 60;

	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�", hour, min, sec);

}