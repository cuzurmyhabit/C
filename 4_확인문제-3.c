#include <stdio.h>

int main(void)
{
	int res;
	double kor=3, eng=5, math=4;
	double credits=0;
	double grade=0;
	double kscore=3.8, escore=4.4, mscore=3.9;

	credits = kor + eng + math;
	grade = (kscore + escore + mscore) / 3;

	res = (credits > 10) && (grade >= 4.0);
	printf("°á°ú°ª = %d", res);

	return 0;
	

}