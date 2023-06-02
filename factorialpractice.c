main()
{
    int n,x,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=n;
    while(n>=1)
        {
        f=f*n;
        n--;
    }
    printf("The Factorial of %d is %d",x,f);
    getch();
}
