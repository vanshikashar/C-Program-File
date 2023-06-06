//Writing in a file using fputs() in C language//
#include<stdio.h>
main()
{
    char str[20];
    FILE *fp;
    fp=fopen("f1.txt","r");
    printf("Enter your name");
    gets(str);
    fputs(str,fp);
    fclose(fp);
}
