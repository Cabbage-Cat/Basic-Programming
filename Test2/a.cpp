#include <bits/stdc++.h>
#define MAX_N 10000

typedef struct
{
    char name[50];
    int barcode;
    int value;
}Product;

Product P[MAX_N];
int n;

void inputProduct()
{
    int t=-1;
    printf("Please Enter product number.\n");
    scanf("%d",&n);
    printf("****************************************************************************\n");
    printf("Please enter Product info(Name , barcode , value)(One line one product).\nEX:apple 12345 15\n");
    while (++t<n)
    {
        getchar();
        scanf("%s",P[t].name);
        scanf("%d",&P[t].barcode);
        scanf("%d",&P[t].value);
    }
    printf("****************************************************************************\n");

}

int find_product_index(int barcode)
{
    for (int i=0;i<n;i++)
    {
        if (P[i].barcode == barcode)
            return i;
    }
}

using namespace std;

int main()
{
    inputProduct();
    int res=0;
    int buy_size;
    int b_c,s;
    int p_index;
    printf("****************************************************************************\n");
    printf("Please enter how many product do you buy:");
    scanf("%d",&buy_size);
    while (buy_size-->0)
    {
        printf("Please enter the product BARCODE:");
        scanf("%d",&b_c);
        printf("Please enter the buy number of this product:");
        scanf("%d",&s);
        p_index = find_product_index(b_c);
        int cost = P[p_index].value*s;
        printf("Your product: %s  value:%d  number:%d  cost:%d\n",P[p_index].name,P[p_index].value,s,cost);
        res+=cost;
    }
    printf("Your products' cost is %d\n",res);
    printf("****************************************************************************\n");
    return 0;
}