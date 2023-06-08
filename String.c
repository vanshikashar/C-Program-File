/*Program to transform a string into its uppercase without using strupr C*/
main()
{
    char str[20];
    int i;
    printf("Enter a String");
    gets(str);
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
