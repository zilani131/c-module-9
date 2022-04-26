#include<stdio.h>
int main(){
    int enter;
    printf("Enter the Uppercase Letter: ");
    scanf("%c",&enter);
    char lowercase=(enter-'A')+'a'; 
    //the logic behind this is first we find the uppercase letter position 
    // than we add the position value to the lowercase initial value
    printf("%c",lowercase);
}