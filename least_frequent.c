//
// Created by marce on 4/15/2026.
//

#include <stdio.h>

int numbers[101];
int num;
int main (){
    //this are the variables of iteleration
    int i,x,min,result;
    // this is for the lenght of the list
    printf("enter the numbers you want: ");
    scanf("%d",&num);
    printf("Numbers of inputs:\n");
    for ( i = 0; i<num;i++){
        scanf("%d",&x);// this part read the input of the user
        numbers[x]++;// is incrementing the input in the index 'x'
    }
    min = 100;// inicialiating the
    for( i = 0; i <=100;i++){
        if(numbers[i]>0&&numbers[i]<min){
            result = i;
            min= numbers[i];
        }
    }
    printf("small number repeated if: %d",result);
    return 0;
}
