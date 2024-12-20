// Print all integers between 1 to 1000 (inclusive) that are multiples of 4 and 6 but NOT BOTH. 
// For eg. 12 should Not be printed. Print them separated by single space. 

#include<stdio.h>

int main(){
    int i;
    for(i=1; i<=1000; i++){

        if ((i%4==0 && i%6!=0) ||  (i%4!=0 && i%6==0)) {
            printf("%d ",i);
        }

    }
    return 0;
}
