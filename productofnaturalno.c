main()
{
    int N,p=1,i;
    printf("Type a natural number to get product");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
         p=p*i;
        printf("The product is %d",p);
    getch();
}
