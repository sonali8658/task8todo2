#include<stdio.h>
void avg(int a,int b,int c){
    int avg;
    avg=(a+b+c)/3;
    printf("%d\n",avg);
}
void main()
{
avg(3,5,6);
avg(6,7,8);
avg(7,8,9);
avg(7,9,0);
}