main()
{
    int x,r,s=0;
    printf("Type a number");
    scanf("%d",&x);
    while(x!=0){
        r=x%10;
        s=s+r;
        x=x/10;
    }
    printf("Sum of digits=%d",s);
    getch();
}
