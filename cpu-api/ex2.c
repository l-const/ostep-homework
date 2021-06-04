#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char**argv){
    printf("Ex 2");
    int fd = open("./text.txt", O_WRONLY);
    close(fd);

}