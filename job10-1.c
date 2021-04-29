#include <stdio.h>
#include <math.h>

int main()
{
    int id, i, n;
    float mean, score[40], sum, sd=0;
    char first[20], last[20], grade;
    FILE *student;
    student = fopen("stu_score.txt","w");
    for(i=1;;i++)
    {
        printf("record no #%d\n", i);
        printf("Id      : ");
        scanf("%d", &id);
        if(id == 0){break;}
        printf("First name  : ");
        scanf("%s", &first);
        printf("Last name   : ");
        scanf("%s", &last);
        printf("Score       : ");
        scanf("%f", &score[i]);
        fprintf(student,"%d %s %s %.2f\n", id, first, last, score[i]);
        sum = sum + score[i];
    }
    fclose(student);
    n = i-1;
    mean = sum/n;
    for(i=1;i<=n;i++)
    {
        sd = sd + pow(score[i]-mean,2);
    }
    sd = sqrt(sd/n);
    system ("cls");
    student = fopen("stu_score.txt","r");
    printf("==================================================================\n");
    printf("No. Id   First_name           Last_name              Score   Grade\n");
    printf("==================================================================\n");
    for(i=1;i<=n;i++)
    {
        fscanf(student,"%d%s%s%f", &id, &first, &last, &score[i]);
        if(score[i] >= mean+2*sd){grade =  'A';}
        else if(score[i] >= mean+sd && score[i] < mean+2*sd){grade = 'B';}
        else if(score[i] >= mean && score[i] < mean+sd){grade = 'C';}
        else if(score[i] >= mean-sd && score[i] < mean){grade = 'D';}
        else if(score[i] < mean-sd){grade = 'F';}
        printf("%-3d %-4d %-20s %-20s %7.2f %5c\n", i, id, first, last, score[i], grade);
    }
    printf("==================================================================\n");
    fclose(student);
    return 0;
}
