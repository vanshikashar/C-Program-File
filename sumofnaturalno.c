main()
{
    int N,s=0,i;
    printf("Type a natural number and get the sum");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        s=s+i;
    printf("The sum is %d",s);
    getch();

}
