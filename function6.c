void sum1(void);
void sum2(int);
main()
{
    int k;
    k=sum4(6);
    printf("Sum is %d",k);
}
/*TSRS*/
int sum4(int N)
{
    int i,s=0;
    for(i=1;i<=N;i++)
        s=s+i*i;
    return(s);
}
/*TNRS*/
int sum3()
{
    int i,N,s=0;
    printf("Enter a natural number");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        s=s+i*i;
      return(s);
}
/*TSRN*/
void sum2(int N)
{
    int i,s=0;
    for(i=1;i<=N;i++)
        s=s+i*i;
    printf("The sum is %d",s);
}
/*TNRN*/
void sum1()
{
    int N,i,s=0;
    printf("Enter a natural number");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s=s+i*i;
    }
    printf("The sum is %d",s);
}
