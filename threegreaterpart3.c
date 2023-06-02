main()
{
    int a,b,c,k;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            k=a;
        else
            k=c;
    }
       else{
        if(b>c)
            k=b;
        else
            k=c;
       }
   printf("Greatest number is %d",k);
   getch();
}
