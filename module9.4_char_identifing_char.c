#include<stdio.h>
int main(){
    int given;
    printf("Enter the value: ");
    scanf("%c",&given); 
    //we take input as char cause our condition is in char
     //here if we give an char as input it will convert
    //   to its ascii value
     if (given>='A'&&given<='Z')
     {// the condition convert the value to ascii and check
         printf("Uppercase");
     }
     else if(given>='a'&&given<='z')
     {
         printf("Lowercase");
     }
     else if (given>='0'&&given<='9')
     {
        printf("Digit");
     }
     else{
         printf("others");
     }

}