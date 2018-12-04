#include <bits/stdc++.h>

#define MAX_N 10000
using namespace std;

char str[MAX_N];

int main()
{
    int str_size;
    printf("Please Enter a string.Ex: abcde.\n");
    scanf("%s",str);
    str_size = strlen(str);
    sort(str,str+str_size);
    printf("%s\n",str);
    while (next_permutation(str,str+str_size))
    {
        printf("%s\n",str);
    }
    return 0;
}