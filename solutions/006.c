// Take your first name as input (single word) and Print it with all alphabets in UPPERCASE

#include<stdio.h>

int main(){

    char name[100];
    printf("enter your name: ");
    scanf("%s", name);
    printf("\n");

    int i=0;
    while(name[i] != '\0'){
        if(123>name[i] && name[i]>96){
            printf("%c", name[i]-32);
        }
        else{
            printf("%c", name[i]);
        }
        i++;
    }
    return 0;
}