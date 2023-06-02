main()
{
    int x,y,l;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    for(l=1;l<=x*y;l++)
        if(l%x==0&&l%y==0)
        break;
    printf("The LCM is %d",l);


}
