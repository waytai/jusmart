#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *desc;
    desc = malloc(200*sizeof(char));
    if(desc == NULL)
    {
        fprintf(stderr,"liuzhiwei\n");
    }
    else
    {
        fprintf(stderr, "zzzz\n");
    }
    exit(0);
}
