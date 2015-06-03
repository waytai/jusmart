#include "apue.h"
#include <fcntl.h>

char	buf1[] = "abcdefghij";
char	buf2[] = "ABCDEFGHIJ";

void error_sys(char *msg);

int
main(void)
{
	int		fd;
	int		fw;

	if ((fd = creat("file.hole", FILE_MODE)) < 0)
        printf("file.hole is not create");
    else
        printf("%d\n", fd);
		error_sys("creat error");
    printf("--------\n");

	if (fw = write(fd, buf1, 10) != 10)
		error_sys("buf1 write error");
    else
        printf("fw is %d\n", fw);
	/* offset now = 10 */

	if (lseek(fd, 16384, SEEK_SET) == -1)
		error_sys("lseek error");
	/* offset now = 16384 */

	if (write(fd, buf2, 10) != 10)
		error_sys("buf2 write error");
	/* offset now = 16394 */

	exit(0);
}

void error_sys(char *msg)
{
    printf("%s\n", msg);
}

