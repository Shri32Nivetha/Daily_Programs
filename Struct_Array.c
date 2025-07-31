#include <stdio.h>

struct Batsman{
    char name[15];
    int age;
    int runs;
    float strike;
};

void main(){
    struct Batsman batter[3];
    for(int i=0;i<3;i++){
        printf("Enter name of batsman:");
        scanf("%s",&batter[i].name);
        printf("Enter age of batsman:");
        scanf("%d",&batter[i].age);
        printf("Enter runs scored by batsman :");
        scanf("%d",&batter[i].runs);
        printf("Enter the strike rate of batsman :");
        scanf("%f",&batter[i].strike);
    }
    printf("\nBatsman Details:");
    for(int i=0;i<3;i++){
        printf("\n");
        printf("\nName of batsman : %s",batter[i].name);
        printf("\nAge of batsman : %d",batter[i].age);
        printf("\nRuns scored : %d",batter[i].runs);
        printf("\nStrike rate : %.2f",batter[i].strike);
    }

}