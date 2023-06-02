main()
{
    int year;
    printf("Enter a number");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0)
            printf("Leap year");
        else
            printf("Not a leap year");

    }
    else{
        if(year%4==0)
            printf("Leap year");
        else
            printf("Not a leap year");
    }
    getch();
}
