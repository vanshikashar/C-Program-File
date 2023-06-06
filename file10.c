/*Writing in a file using fprint() function in C language*/
#include<stdio.h>
main()
{
    FILE *fp;
    int a,b;
    fp=fopen("f1.txt","w");
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}
