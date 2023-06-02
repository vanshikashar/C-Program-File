main()
{
    int N,s=0,i=1;
    printf("Enter a number");
    scanf("%d",&N);
    while(i<=N){
        s=s+2*i-1;
        i++;
    }
    printf("The Sum is %d",s);
    getch();
}
