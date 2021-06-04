#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv) {
    int x = 100;
    int rc = fork();
    if(rc < 0) {
        exit(1);
    } else if (rc == 0) {
        // parent process
        x = 56;
        printf("[Parent process: (%d)] X is : %d\n", getpid(),x);
    } else {
        x = 43;
        // child process
        printf("[Child process (%d)] X is : %d\n", getpid() , x);
    }

}