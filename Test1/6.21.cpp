#include <iostream>
#include <cstdio>
#include <cstring>
void solve();

int main()
{
    solve();
    return 0;
}

void solve()
{
    int choose;
    int begin_f = 0,begin_e=5;
    while (printf("Please type 1 for \"first class \" \n"),
    printf("Please type 2 for \"economy \" \n"),
    ~scanf("%d",&choose)  //EOF to EXIT.
    )
    {
        if (begin_f ==5 && begin_e == 10)
            printf("Next flight leaves in 3 hours.\n");
        else if (choose == 1)
        {
            if (begin_f==5)
            {
                int flag;
                printf("First is FUll. Do U want to choose economy? 1 to choose 0 not.\n");
                scanf("%d",&flag);
                if (flag==1)
                    printf("Economy : Seat %d\n\n",begin_e++);
                else
                    printf("Next flight leaves in 3 hours.\n");
            }
            else
                printf("First : Seat %d\n\n",begin_f++);
        }
        else if (choose == 2)
        {
            if (begin_e==10 && begin_f!=5)
            {
                int flag;
                printf("Economy is FUll. Do U want to choose first? 1 to choose 0 not.\n");
                scanf("%d",flag);
                if (flag)
                    printf("First : Seat %d\n\n",begin_f++);
                else
                    printf("Next flight leaves in 3 hours.\n");
            }
            else
                printf("Economy : Seat %d\n\n",begin_e++);
        }
    }

}