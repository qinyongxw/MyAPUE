#include "apue.h"

int main(int argc,char * argv [ ])
{
    printf("the uid=%d, gid=%d\n", getuid(), getgid());
    exit(0);
}
