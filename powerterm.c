main()
{
    int x,y,p=1,i;
    printf("Enter a number and power\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
        p=p*x;
    printf("The Result is %d",p);
    getch();
}
