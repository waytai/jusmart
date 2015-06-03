#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<sys/mman.h>
main()
{
int fd;
void *start;
struct stat sb;
char buf[80];
char *cur_path = getcwd(buf, sizeof(char)*80);
printf("%s\n", buf);
printf("%s\n", cur_path);
char *file_path = strcat(cur_path,"/hello.c");
printf("%s\n", file_path);
fd=open(file_path,O_RDONLY); /*打开/etc/passwd*/
fstat(fd,&sb); /*取得文件大小*/
start=mmap(NULL,sb.st_size,PROT_READ,MAP_PRIVATE,fd,0);

if(start == MAP_FAILED) /*判断是否映射成功*/
    return;
printf("%s\n",(char*)start);
munmap(start,sb.st_size); /*解除映射*/
close(fd);
return 0;
}
