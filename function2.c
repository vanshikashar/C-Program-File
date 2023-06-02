//takes something returns nothing
void add(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    add(x,y);
    getch();
}
void add(int x,int y)//formal arguments
{
    int c;
    c=x+y;
    printf("sum is %d",c);
}

