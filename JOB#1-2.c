#include <stdio.h>

int main()
{
	float mid, fin, work, total;
	char grade;
	printf("Input Score\n");
	printf("*********************\n");
	printf("Mid-term (40%%) : ");
	scanf("%f", &mid);
	printf("Final    (40%%) : ");
	scanf("%f", &fin);
	printf("Homework (20%%) : ");
	scanf("%f", &work);
	printf("*********************\n");
	total = mid+fin+work;
	if(total >= 80)
	{
		grade = 'A';
	}
	else if(total >= 70)
	{
		grade = 'B';
	}
	else if(total >= 60)
	{
		grade = 'C';
	}
	else if(total >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	printf("Total = %.2f\n", total);
	printf("Grade = %c\n", grade);
    printf("*********************\n");
	return 0;
}
