#include<stdio.h>
int main(){
    // the character has ascii value if we give the
    //  ascii value it will give the out put as char 
    // when format modifier is c
    // finding the all upper case letter
    for (int i = 'A'; i <='Z'; i++)
    {
         printf("%d is the ASCII Value of the char %c\n",i,i);
    } 
}