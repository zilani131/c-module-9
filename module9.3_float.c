#include<stdio.h>
int main(){
    // float give less precission value than double.
    // when overflowed it give at some extent actual value than give some
    //  wrong value but when it cross the range big enough it give inf value also give -inf 
    // we can divide any number by 0 and it will return inf
    double x=30.0/0.0;
    printf("%lf %lf %lf\n",1e400,-1e400,x);
    printf("%lf %lf \n",1e40,-1e40);
// we can use some function which is used when data type is double 
//  if it it int data type it will convert it first then give floating value 
int y=81;
float z=80.5;
   printf("%lf %lf %lf %lf",pow(3,3),sqrt(y),ceil(z),floor(z));
// floor will give the lower int num and ceil will give the upper int number
//    we can find more function from math.h header file
}