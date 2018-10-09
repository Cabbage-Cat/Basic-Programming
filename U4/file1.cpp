#include <cstdio>
#include <iostream>
#include <cmath>
bool is_prime(int n);
int gcd(int x,int y);
int gcm(int x,int y);
int main()
{
    // for (int i=1;i<=5;i++)
    // {
    //     int tmp = i;
    //     while(tmp--)
    //         printf("*");
    //     printf("\n");
    // }

    // for (int i=1;i<=5;i++)
    // {
    //     int tmp = 2*i-1;
    //     int space = 5-i;
    //     while (space--)
    //         printf(" ");
    //     while(tmp--)
    //         printf("*");
    //     printf("\n");
    // }

    // for (int i=1;i<=9;i++)
    // {
    //     for (int j=i;j<=9;j++)
    //         printf("%d * %d = %d ",i,j,i*j);
    //     printf("\n");
    // }
    // int i = is_prime(7);
    int i = gcd(10,12);
    std::cout << i;
    return 0;
}

bool is_prime(int n)
{
    int tmp = sqrt(n);
    for (int i=2;i<=tmp;i++)
        if (n % i == 0)
            return false;
        
    return true;
}

int gcd(int x,int y)
{
    while (y!=0)
    {
        int tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

int gcm(int x,int y)
{
    int tmp = gcd(x,y);
    return x*y/(tmp*tmp);
}
