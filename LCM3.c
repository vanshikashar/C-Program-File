main()
{
    int a,b,L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L=L+(a>b?a:b))
        if(L%a==0&&L%b==0)
        break;
    printf("The LCM is %d",L);
    getch();
}
