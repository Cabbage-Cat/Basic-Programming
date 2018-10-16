#include <cstdio>
#include <cstring>

float h[3];
float calculateCharges(float h);

int main()
{
    //Input
    for (int i=0;i<3;i++)
    {
        scanf("%f",&h[i]);
        //Check input.
        if (h[i] < 0)
        {
            printf("Input Error.\n");
            return -1;
        }
    }
    
    printf("Car     Hours     Charge\n");
    float sol = 0;

    //Output
    for (int i=1;i<=3;i++)
    {
        printf("%d",i);
        printf("%12.1f",h[i-1]);
        float result = calculateCharges(h[i-1]);
        sol += result;
        printf("%11.2f\n",result);
    }

    //Total
    printf("TOTAL");
    printf("%8.1f",h[0]+h[1]+h[2]);
    printf("%11.2f\n",sol);

    return 0;
}

float calculateCharges(float h)
{
    if (h<3)
        return 2.0;
    else if (h>19)
        return 10.0;
    
    return 2+(h-3)*0.5;
}