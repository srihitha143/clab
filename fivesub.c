#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;
	float total,avg,per;
	printf("enter five subject marks");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	per=(total/500);
	printf("the total of five subjects is %f",total);
	printf("the avg of five subjects is %f",avg);
	printf("the per of five subjects is %f",per);
}

