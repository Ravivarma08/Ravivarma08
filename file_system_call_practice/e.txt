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
    int fd,size,write_size;
    char buff[1024]= "";
    if(argc != 2)
    {
        printf(" input string argv missed\n");
        exit(1);
    }
    write_size =write(1,argv[1],strlen(argv[1]));
    if (write_size == strlen(argv[1]))
{
    printf("\nOK\n");
}
    return 0;
}
