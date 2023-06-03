struct date
{
    int d,m,y;
    };
    void main()
    {
        struct date today, d1;
        today .d=03;
        today .m=06;
        today .y=2023;

        d1=today;

        printf("Enter today's date");
        scanf("%d%d%d",&d1 .d,&d1 .m,&d1 .y);
        printf("Date:%d/%d/%d",d1 .d,d1 .m,d1 .y);
        getch();
    }
