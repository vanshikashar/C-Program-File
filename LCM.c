main()
{
    int x,y,L;
    printf("Enter two numbers to get LCM");
    scanf("%d%d",&x,&y);
    for(L=1;L<=x*y;L++)
    if(L%x==0&&L%y==0)
        break;
    printf("The LCM is %d",L);
    getch();
}
