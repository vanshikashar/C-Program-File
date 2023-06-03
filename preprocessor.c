#define PI 3.14
int main()
{
    int r;
    float a;
    printf("Enter a radius of circle");
    scanf("%d",&r);
    a=PI*r*r;
    printf("Area of circle is %f",a);
    getch();
}
