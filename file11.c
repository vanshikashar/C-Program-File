/*Reading from a file using fscanf() in C language*/
#include<stdio.h>
main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("f1.txt","r");
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    fclose(fp);
}
