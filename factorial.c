main()
{
    int n,x,f=1;
    printf("Type a number to get factorial");
    scanf("%d",&n);
    x=n;
    while(n>=1){
        f=f*n;
        n--;
    }
    printf("Factorial of %d is %d",x,f);
    getch();
}
