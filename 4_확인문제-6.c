#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;
	double time = 3.76;

	hour = (int)time;
	min = (time - hour) * 60;

	min = (int)time;

	sec = (time - min) * 60;

	printf("3.76시간은 %d시간 %d분 %d초입니다", hour, min, sec);

}