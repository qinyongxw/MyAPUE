#include "apue.h"
#include <fcntl.h>

int main(int argc,char * argv [ ])
{
    char buf1[16392] = {'a'};
    /*char buf2[] = "ABCDEFG";
    */
    int fd;

    if ((fd = creat("file.nohole", FILE_MODE)) < 0)
        err_sys("creat error");

    if ((write(fd, buf1, sizeof(buf1)))  != sizeof(buf1))
        err_sys("write error");

   /* if ((lseek(fd, 16384, SEEK_SET)) == -1)
        err_sys("lseek error");
    */
    /*if ((write(fd, buf2, sizeof(buf2))) != sizeof(buf2))
        err_sys("write error");
    */
    exit(0);
}
