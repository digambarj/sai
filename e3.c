#include<stdio.h>
#define slower 3
#define midd 50
#define big 100
void main()
{
float far,cel;
printf("Enter the far");

scanf("%f",&far);

for(slower;far<big;far+=23)
{
cel=(5.0/9.0)*(far++ - 32.0);
printf("%d\n%6d\n\n%f\n%6f\n%.2f\n%6.2f\n",cel,cel,cel,cel,cel,cel);
}
}
