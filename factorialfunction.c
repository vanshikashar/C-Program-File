int fact(int);
main()
{
    int x,N;
    printf("Enter a number");
    scanf("%d",&N);
    x=fact(N);
    printf("factorial is %d",x);
    getch();
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return(f);

}
