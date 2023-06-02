main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    getch();

}
/*a=40 b=20
  a=60 b=20
  a=60 b=40
  a=20 b=40
*/
