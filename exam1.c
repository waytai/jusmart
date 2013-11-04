#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *desc;
    int len = 0;
    desc = malloc(200*sizeof(char));
    if(desc == NULL)
    {
        fprintf(stderr,"liuzhiwei\n");
    }
    else
    {
        fprintf(stderr, "zzzz\n");
    }
    len = strlen(desc);
    printf("%d\n", len);
    exit(0);
}
