#include<stdio.h>
#include<ctype.h>
int main(){
    char upperInput;
    printf("Enter your uppercase: ");
    scanf("%c",&upperInput);
    printf("%c",tolower(upperInput));
    
}