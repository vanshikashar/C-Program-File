main()
{
    int i,j,p;
    printf("Enter number of rows: ");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        for(j=1;j<=2*p-1;j++){
            if(j>=i&&j<=2*p-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
