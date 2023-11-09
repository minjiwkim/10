#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp;
    char str[100];
    int i;
    
    fp = fopen("sample.txt", "w");
    
    for (i=0;i<3;i++)
    {
    printf("input a word:");
    scanf("%s", str);
    fprintf(fp, "%s\n", str);
    }
    
    fclose(fp);
  
  system("PAUSE");	
  return 0;
}
