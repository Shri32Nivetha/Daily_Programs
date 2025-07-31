#include <stdio.h>
int main(){
    int a[5];
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int x;
    for (int j=0;j<5;j++){
        for(int s=j+1;s<5;s++){
            if(a[j]>a[s]){
                x=a[j];
                a[j]=a[s];
                a[s]=x;

            }
        }

        
    }
    printf("The elements are\n");
    for (int z=0;z<5;z++){
        printf("%d",a[z]);
        printf("\n");
    }
}