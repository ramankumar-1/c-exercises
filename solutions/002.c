// Print all even numbers between 4 and 1000 (inclusive), separated by a comma ','

#include<stdio.h>

int main(){
    int i;
    for(i=4; i<=1000; i=i+2){
        printf("%d, ",i);
    }
    return 0;
}