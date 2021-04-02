// #include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
    int fd = 0;
    fd = open("./test.txt",O_RDWR);
    if (-1 == fd) {
        printf("open fail\n");
    }else{
        printf("open success\n");
    }
    char buff1[] = "hello world";
    write(fd, buff1,11);
    lseek(fd,SEEK_SET,0);
    char buff2[12] = {0};
    read(fd,buff2,sizeof(buff2));
    printf("buff2=>%s",buff2);
    return 0;
}