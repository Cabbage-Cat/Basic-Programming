#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAX_N 1000

int x[MAX_N];

void find_prime();

int main()
{
    find_prime();
    return 0;
}

void find_prime()
{
    std::fill(x,x+MAX_N,1);
    for (int i=2;i<MAX_N;i++)
    {
        if (x[i] == 1)
            for (int j=2;i*j<MAX_N;j++)
                x[i*j] = 0;
    }

    for (int i = 2;i<MAX_N;i++)
        if (x[i] == 1)
            std::cout<<i<<std::endl;
}