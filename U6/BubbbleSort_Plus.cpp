#include <cstdio>
#include <iostream>

void BubbleSort(int *x,int n);
int main()
{
    int test[10] = {10,9,8,7,6,5,4,3,2,1};
    BubbleSort(test,10);
    return 0;
}

void BubbleSort(int *x,int n)
{
    for (int i=1;i<n;i++)
    {
        if (x[i-1]>x[i])
        {
            int tmp = x[i-1];
            x[i-1] = x[i];
            x[i] = tmp;
            i = 0;
            continue;
        } 
    }
}