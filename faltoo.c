main()
{
  int a,b;
  printf("Enter a number to print table of that number: ");
  scanf("%d",&a);
  for(b=1;b<=10;b++)
    printf("%d*%d=%d\n",a,b,a*b);
  getch();
}
