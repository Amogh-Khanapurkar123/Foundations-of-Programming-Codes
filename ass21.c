#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    FILE *fs,*ft;
    char ch;

    
    fs=fopen("source.txt","r");
    if (fs==NULL)
    {
        printf("Cannot open source file\n");
        exit(1); 
    }

    ft=fopen("target.txt","w");
    if (ft==NULL) 
    {
        printf("Cannot open target file\n");
        fclose(fs); 
        exit(2);
    }

    while ((ch=fgetc(fs))!= EOF) 
    {
        fputc(ch,ft);
    }
    printf("File copied successfully.\n");
    fclose(fs);
    fclose(ft);
    return 0;
}
