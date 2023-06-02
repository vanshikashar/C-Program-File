main()
{
    int x,y=0,r;
    printf("Type a number");
    scanf("%d",&x);
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("The Reverse is %d",y);
    getch();
}
