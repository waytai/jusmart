#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
double my_ret(double t);


int main()
{
    double ret;
    ret = my_ret(2.0);
    printf("sqrt +2 = %g\n", ret); 
    //printf("sqrt -2 = %g\n", sqrt(-2.0));
    exit(0);
}

double my_ret(double x)
{
    double ret;
    if(x>=0.0)
    {
        ret = sqrt(2.0);
    }
    else
    {
        ret = 0.0;
    }
    return ret;
}
