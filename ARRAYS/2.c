#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of students:");
    scanf("%d",&n);
    int arr[n];
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        printf("enter marks:");
        scanf("%d",&arr[i]);
        if(arr[i]>=80){
            count1++;
        }
        if(arr[i]>=60&&arr[i]<=70){
            count2++;
        }
    }
    printf("Students got >=80 is %d\n",count1);
    printf("Students got between 60 and 70 is %d",count2);
    return 0;
}