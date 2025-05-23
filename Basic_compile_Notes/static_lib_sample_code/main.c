#include"add_func.h"
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
   int total;
   if(argc != 3)
   {
    printf("input formant should be ./app.exe <num1> <num1>\n");
    return 0;
   }
   total = add(atoi(argv[1]),atoi(argv[2]));
   printf("sum of 2 numbers %d\n",total);
}