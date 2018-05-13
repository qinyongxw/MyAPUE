#include "apue.h"

int main(int argc,char * argv [ ])
{
    printf("%%");
    printf("hello world form process ID %ld \n", (long)getpid());
    exit(0);
}