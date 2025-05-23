#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>
#include<string.h>

int main(int argc, char* argv[])
{
    int fd,size,read_size,line=0;
    char buff[1024]= "";
    if(argc != 2)
    {
        printf(" input file missed\n");
        exit(1);
    }
    printf("input file name : %s\n",argv[1]);
    fd = open(argv[1],O_RDONLY);
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
            read_size =write(1,buff,size);
            if(0 == strcmp(buff,"\0"))
            {
                line++;
            }
        } while (size>0 || line <11);
        
         

    }
    close(fd);
    printf("hello ravi\n");
    return 0;
}
