#include<stdio.h>
int main(){
    char sentence[100];
    printf("Enter a sentence:");
    scanf("%S",&sentence);
    printf("You Entered:%S", sentence);
    return 0;
}