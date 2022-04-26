#include<stdio.h>
#include<limits.h>
int main(){
    // the range of int is -2^31 to 2^31-1
    // if we enter or write a program that exist the limit 
    // it will be overflowed and give a wrong value so we must be careful
    // as compiler cannot give the error
    printf("Lower limit =%d, Higher limit =%d\n",INT_MIN,INT_MAX);
    // 4 more types int contain
    // short int:it is generally don't use ,we use it when we need small memory
    // short int range is -2^15to 2^15-1 and %hd is use
    // long int: it is not use most case  range is and format specifier %ld is use
    // long long int : it is mostly use  and range  -2^63 to 2^32-1 
    // unsigned int : it always give the positive number and it is well defined
    // when we assign a negative value it will give the last positive number
    printf("short int : Lower limit=%hd Higher limit=%hd\n",SHRT_MIN,SHRT_MAX);
    printf("long int : Lower limit=%ld Higher limit=%ld\n",LONG_MIN,LONG_MAX);
    printf("long long  int : Lower limit=%lld Higher limit=%lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
    printf("unsigned  int : Lower limit=%u Higher limit=%u\n",0,UINT_MAX);



}