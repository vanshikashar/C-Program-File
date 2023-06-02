void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
main()
{
    int k;
    k=sum4(6);
    printf("Addition is %d",k);
}
/*TNRN*/
void sum1()
{
    int i,N,s=0;
    printf("Enter a natural number");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s=s+i;
    }
    printf("Sum is %d",s);
}
/*TSRN*/
void sum2(int N)
{
    int i,s=0;
    for(i=1;i<=N;i++){
        s=s+i;
    }
    printf("Sum is %d",s);
}
/*TNRS*/
int sum3()
{
    int i,N,s=0;
    printf("Enter a natural number");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s=s+i;
    }
    return(s);
}
/*TSRS*/
int sum4(int N)
{
    int i,s=0;
    for(i=1;i<=N;i++){
        s=s+i;
    }
    return(s);
}
