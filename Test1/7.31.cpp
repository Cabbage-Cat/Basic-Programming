#include <iostream>
#include <cstdio>

using namespace std;
double sub(double,double);
double add(double,double);
double mul(double,double);
double div(double,double);

int main()
{
    int choose;
    double (*pfunc[])(double, double) = { sub, add, mul, div }; 
    while (cout << "Plz Enter 0 or 1 or 2 or 3 -1 to quit"<< endl,
    cout << "0:sub 1:add 2:mul 3:div"<<endl,
    ~scanf("%d",&choose) && choose != -1)
    {
        cout << "Plz enter two num to calculate." << endl;
        double x,y;
        cin >> x >> y;

        if (choose == 3 && y==0)
        {
            cout << "Input error." << endl;
            return -1;
        }

        cout << "res:"  <<pfunc[choose](x,y) << endl;
    }
    
    return 0;
}

double sub(double x, double y)
{
    return x-y;
}

double add(double x,double y)
{
    return x+y;
}

double mul(double x,double y)
{
    return x*y;
}

double div(double x,double y)
{
    return x/y;
}