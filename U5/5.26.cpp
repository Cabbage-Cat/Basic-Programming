#include <cstdio>
#include <cstring>
#include <cmath>
#define MAX_N 100000

int is_Perfect(long long number);


int main()
{
    
    for (int i = 2;i<1000;i++)
        if (is_Perfect(i))
        {
            printf("\n%d\nFactor number:",i);
            printf("1 ");
            for (int j=2;j<sqrt(i);j++)
                if (i % j == 0)
                    printf("%d %d ",j,i/j);
            if (sqrt(i)*sqrt(i) == i)
                printf("%d",sqrt(i));
        }
    return 0;
}

int is_Perfect(long long x)
{
    if (x < 2)
        return 0;
    int sum = 1;
    for (int i=2;i<sqrt(x);i++)
        if (x % i == 0)
            sum += i + x/i;
    if (sqrt(x)*sqrt(x) == x)
        sum += sqrt(x);

    if (sum == x)
        return 1;
    return 0;
}