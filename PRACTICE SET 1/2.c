// #include <stdio.h>
// int main(){
//     int radius;
//     float area;
//     printf("enter radius: ");
//     scanf("%d",&radius);
//     area = 3.14*radius*radius;
//     printf("area of circle is: %.2f",area);
// }

#include <stdio.h>
int main(){
    int radius,height;
    float volume;
    printf("enter radius: ");
    scanf("%d",&radius);
    printf("enter height: ");
    scanf("%d",&height);
    volume = 3.14*radius*radius*height;
    printf("volume of cylinder is: %.2f",volume);
    return 0;
}