/*Find the greatest among 10 numbers*/
main()
{
    int a[10],i,max;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<=9;i++)
        if(max<a[i])
        max=a[i];
    printf("Greatest number is %d",max);
    getch();
}
