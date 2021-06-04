#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc,char *argv[]) {
    printf("hello world (pid:%d)\n", (int) getpid());
    printf("number of arguments: argc: %d\n", argc);
    int rc = fork();
    if( rc < 0) {
        fprintf(stderr, "fork failed\n");
    }
    else if(rc == 0) {
        printf("Hello, I am child (pid:%d)\n,with parent (pid:%d)\n", (int) getpid(), (int) getppid());
    } else {
        int rc_wait = wait(NULL);
        printf("Hello, I am parent (pid:%d)\n", (int) getpid());
    }

    return 0;
}
