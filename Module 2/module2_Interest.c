#include<stdio.h>
#include<math.h>
int main()
{
    int amount,year;
    float interest,ans,p,cfinal,a;

    printf("enter your Amount:");
    scanf("%d",& amount);
    printf("enter your Duration year:");
    scanf("%d",&year);
    printf("enter Your Rate of interest:");
    scanf("%f",& interest);
    ans= ( ( amount * interest ) / 100) * year;
    cfinal=amount*(pow((1+interest/100),year))-amount;
    printf("Your Simple Interest is:%.2f\n",ans);
    printf("your compound interest is:%.2f",cfinal);

return 0;

}