main()
{
    char s[3][10];
    int i;
    printf("Enter three strings");
    for(i=0;i<=2;i++)
        gets(s[i]);

    for(i=0;i<=2;i++)
        printf("%s\n",s[i]);
    getch();
}
