#include <cstdio>
#include <iostream>

int main()
{
	float g,sum=0.0;
	int m,t = 0;

	while(printf("Enter the gallons used: (-1 to end):"),scanf("%f",&g)==1 && g!= -1)
	{
		printf("Enter the miles driven: ");
		scanf("%d",&m);
		printf("The miles/gallon for this tank was %f \n \n",m/g);
		sum += m/g,t++;
	}

	printf("The overall average miles/gallon was %f \n",sum/t);
    return 0;
}
