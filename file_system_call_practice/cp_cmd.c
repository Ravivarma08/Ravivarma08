#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>

int main(int argc, char* argv[])
{
    int fd,fd1,size,read_size;
    char buff[1024]= "";
    if(argc != 3)
    {
        printf(" input file missed\n");
        printf(" ouput file missed\n");
        exit(1);
    }
    //printf("input file name : %s\n",argv[1]);
    fd = open(argv[1],O_RDONLY);
    fd1 = open(argv[2],O_WRONLY|O_CREAT,0666);
    if(fd == -1)
    {
        perror("error due to : ");
        printf("error code is %d:\n",errno);
    }
    else
    {
        do
        {
            size = read(fd,buff,1);
            //getchar();
            read_size =write(fd1,buff,size);
        } while (size>0);
        
         

    }
    close(fd);
    printf("hello ravi\n");
    return 0;
}
