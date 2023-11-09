#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp = NULL;
    char c;
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
    printf("fail to open\n");
    return 0;
    }
    
    while( (c=fgetc(fp)) != EOF)
    {
    putchar(c);
    }
    
    fclose(fp);
  
  system("PAUSE");	
  return 0;
}
