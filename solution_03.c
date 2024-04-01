/***
 * You need to take one non-negative
 *  integer (0 or greater than 0)
 *  value as input and tell if it is
 *  even or odd.
 * **/

#include <stdio.h>
int main(){
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);

    if(number%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}