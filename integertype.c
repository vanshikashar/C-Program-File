main()
{
    int x=0;
    x=getIntegeronly();
    printf("\nYou have entered %d",x);
    getch();
}
int getIntegeronly()
{
    int num=0,ch;
    do
{
ch=getch();
 if(ch>=48&&ch<=57)
{
    printf("%c",ch);
    num=num*10+(ch-48);
}
if(ch==13)
    break;
}while(1);
return(num);
}
