main()
{
    int p,N;
    printf("Type a value of N");
    scanf("%d",&N);

    for(p=1;p<=N;p++)
        printf("%d ",N+1-p);
    getch();
}
