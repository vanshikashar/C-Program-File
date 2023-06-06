//Reading from a file using fread() in C language//
#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    struct book b1;
    int a;
    FILE *fp;
    fp=fopen("myfile.dat","rb");
    if(fp==NULL){
        printf("File not found");
        exit(1);
    }
    a=fread(&b1,sizeof(b1),1,fp);
    {
        printf("a= %d",a);
    printf("%d %s %f\n",b1.bookid,b1.title,b1.price);
    }
    a=fread(&b1,sizeof(b1),1,fp);
     printf("a=%d",a);
    fclose(fp);
}

