main()
{
    int a,b,h;
    printf("Enter a number");
    scanf("%d%d",&a,&b);
    for(h=a<b?a:b;  h>=1;h--)
        if(a%h==0&&b%h==0)
            break;
        printf("HCF is %d",h);

}
