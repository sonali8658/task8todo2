#include<stdio.h>
void s_i(float p,int t,float r)
{
    float s_i;
    s_i=(p*t*r)/100;
    printf("%f\n",s_i);
}
void main()
{
    s_i(100,2,34);
     s_i(100,2,35);
      s_i(100,2,9);
       s_i(100,2,10);
        s_i(100,2,3);
}