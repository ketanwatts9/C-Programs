#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("enter temp in celcius: ");
    scanf("%f",&celcius);
    fahrenheit = (1.8*celcius)+32;
    printf("temp in c is %.2f and in f is: %.2f",celcius,fahrenheit);
    return 0;
}