#include<stdio.h>
int main(){
    int a,s=0;
    printf("Enter the number");
    scanf("%d",&a);
    int i=0;
    while(i<a+1){
        s+=i;
        i++;
    }
    printf("The sum of digits of number is %d",s);
}