main()
{
    int x,y;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<=5;y++){
            if(y<=6-x)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
