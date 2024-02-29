#include<stdio.h>
void area_of_cir(float r)
{
    float area;
    const PI=3.141;
    area=2*PI*r;
printf("%f\n",area);
}
int main()
{
area_of_cir(3);
area_of_cir(8);
area_of_cir(9);
area_of_cir(4);
area_of_cir(8);
}