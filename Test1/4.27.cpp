#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    for (int i=1;i<=500;i++)
        for (int j=1;j<=500;j++)
        {
            int k = i*i + j*j;
            int k_sqrt = sqrt(k);
            if (k_sqrt<=500 && k_sqrt*k_sqrt == k)
                printf("%d %d %d \n",i,j,k_sqrt);
        }
    system("pause");
    return 0;
}