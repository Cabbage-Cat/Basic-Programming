/*

Test Case:
#1
Input:
52.43
OutPut:
****52.43
FIFTY TWO and 43/100
#2
Input:
77.15
OutPut:
****77.15
SEVENTY SEVEN and 15/100

*/
#include <bits/stdc++.h>

using namespace std;

const char* moneystr[10] = {"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN"};
const char* tystr[10] = {"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINTY"};
int moneybit(double& x)
{
    int tmp = int(x);
    int res=0;
    while (tmp > 0)
    {
        tmp/=10;
        res++;
    }
    return res;
}

void printmoneychar(double& x)
{
    int money = (int)(x+0.5);
    int bit = money%10;money/=10;
    int ten = money%10;money/=10;
    int hundred = money%10;money/=10;
    int thousand = money%10;money/=10;
    int tenthousand = money/=10;money/=10;

    if (tenthousand)
        printf("%s TENTHOUSAND ",moneystr[tenthousand-1]);
    if (thousand)
        printf("%s THOUSAND ",moneystr[thousand-1]);
    if (hundred)
        printf("%s HUNDRED ",moneystr[hundred-1]);
    if (ten)
        printf("%s ",tystr[ten-1]);
    if (bit)
        printf("%s ",moneystr[bit-1]);

    printf("and ");
    
    int moneyfloat = (int)((x-(int)x+0.005)*100);
    printf("%d/100 \n",moneyfloat);

    // int bit_[5];
    // fill(bit_,bit_+5,0);
    // int t=0;
    // while (money>0)
    // {
    //     bit_[t] = money%10;money/=10;
    //     t++;
    // }
    // printf("%d\n",moneyfloat);

}
int main()
{
    double m;
    scanf("%lf",&m);
    for (int i=0;i<6-moneybit(m);i++)
        printf("*");
    printf("%.2lf",m);
    printf("\n");
    printmoneychar(m);
    return 0;
}