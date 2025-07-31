#include <stdio.h>
int main(){
    int a[5];
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int min;
    for(int j=0;j<5;j++){
        if (j==0){
            min=a[j];
        }
        if (j>0 && a[j]<min){
            min=a[j];
        }
    }
    printf("The smallest element is %d",min);
}