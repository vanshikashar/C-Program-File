//takes nothing returns something
int add(void);
void main()
{
    int s;
    s=add();
    printf("sum is %d",s);
    getch();

}
int add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    return (a+b);
}
