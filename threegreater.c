main()
{
    int a,b,c,k;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        k=a;
    if(b>a&&b>c)
        k=b;
    if(c>a&&c>b)
        k=c;
    printf("greatest number is %d",k);
    getch();
}
