#include <stdio.h>
int main(){
    float phy,chem,maths,total,percent;
    printf("enter physics marks: ");
    scanf("%f",&phy);
    printf("enter chemistry marks: ");
    scanf("%f",&chem);
    printf("enter maths marks: ");
    scanf("%f",&maths);
    total = phy+maths+chem;
    percent = (total/3);\
    printf("total marks: %.2f\n",total);
    printf("percentage: %.2f",percent);
    return 0;
}