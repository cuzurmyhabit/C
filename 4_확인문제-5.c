#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate = 0;

	rate = (double)audience  /(double)seats * 100;

	printf("�����: %.1lf %%", rate);

	return 0;
}