#include<stdio.h>
int main()
{
int physics, chemistry, biology, maths, computerscience;
float percentage;

printf("Enter five subjects marks:");
scanf("%d%d%d%d%d;", &physics, &chemistry, &biology, &maths, &computerscience);

percentage = (physics + chemistry + biology + maths + computerscience) / 5.0;

printf("Percentage = %.2f\n;", percentage);

if(percentage>= 90)
{
printf("Grade A");
}
else if(percentage>= 80)
{
printf("Grade B");
}
else if(percentage >= 70)
{
printf("Grade C");
}
else if(percentage >= 60)
{
printf("Grade D");
}
else if(percentage >= 50)
{
printf("Grade E");
}
else
{
printf("Fail");
}
return 0;
}
