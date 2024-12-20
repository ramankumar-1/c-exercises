// Print all multiples of 17 that are less than 1000 separated by single space.

#include<stdio.h>

int main(){
    int i;
    for(i=17; i<=1000; i=i+17){
        printf("%d ",i);
    }
    return 0;
}