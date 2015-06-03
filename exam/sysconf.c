/*************************************************************************
    > File Name: sysconf.c
    > Author: wayne
    > Mail: @163.com 
    > Created Time: 2015年06月03日 星期三 14时02分33秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main()
{
    long max;
    max = sysconf(_SC_CHILD_MAX);
    printf("%ld\n", max);

    max = sysconf(_SC_LINE_MAX);
    printf("%ld\n", max);
    return 0;
}
