char* reverse(char*);
main()
{
    printf("%s",reverse("Computer"));
    getch();
}
char* reverse(char *p)
{
    int l,i;
    char ch;

    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<1/2;i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+1-l-i);
        *(p+1-l-i)=ch;
    }
    return(p);
}
