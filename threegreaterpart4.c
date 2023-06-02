main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);

    printf("Greatest number is %d",a>b ?a>c?a:c :b>c?b:c);
    getch();
}
