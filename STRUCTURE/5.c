#include <stdio.h>

struct STUDENT
{
    int roll;
    float CPP, Java, android;
    float total, Per;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct STUDENT std[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &std[i].roll);

        printf("Enter marks in CPP: ");
        scanf("%f", &std[i].CPP);

        printf("Enter marks in Java: ");
        scanf("%f", &std[i].Java);

        printf("Enter marks in Android: ");
        scanf("%f", &std[i].android);

        std[i].total = std[i].CPP + std[i].Java + std[i].android;
        std[i].Per = std[i].total / 3.0;
    }

    int maxindex = 0;
    int minindex = 0;

    for (int i = 1; i < n; i++)
    {
        if (std[i].total > std[maxindex].total)
            maxindex = i;

        if (std[i].Per < std[minindex].Per)
            minindex = i;
    }

    printf("\nStudent with Maximum Total Marks:\n");
    printf("Roll No = %d\n", std[maxindex].roll);
    printf("Total Marks = %.2f\n", std[maxindex].total);
    printf("Percentage = %.2f%%\n", std[maxindex].Per);

    printf("\nStudent with Minimum Percentage:\n");
    printf("Roll No = %d\n", std[minindex].roll);
    printf("Total Marks = %.2f\n", std[minindex].total);
    printf("Percentage = %.2f%%\n", std[minindex].Per);

    return 0;
}