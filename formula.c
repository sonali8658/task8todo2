#include<stdio.h>
void formula(int a,int b)
{
    printf("(a+b)^2=%d\n",(a*a)+(b*b)+(2*a*b));

}
void main(){
    formula(3,5);
    formula(4,6);
    formula(8,4);
}