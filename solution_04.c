/**
 *  You need to take one integer value as input
 *  and tell if the value is positive or
 *  negative or zero.
 **/

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number>0){
        printf("Positive");
    }else if(number==0){
        printf("Zero");
    }else{
        printf("Negative");
    }
    return 0;
}