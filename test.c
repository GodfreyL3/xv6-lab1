#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{

    int pid = fork();
    int stat;

//    if(pid == 0)
//    {
//        exitstat(11);
//    }
//    else
//    {
//        printf(1, "PID of parent: %d\n", pid);
//        wait(&stat);
//        printf(1, "This is parent, child status is %d\n", stat);
//
//    }

    if(pid != 0)
    {
        printf(1, "PID of parent: %d\n", pid);
        wait(&stat);
        printf(1, "This is parent, child status is %d\n", stat);
    }

    return exitstat(11);
}