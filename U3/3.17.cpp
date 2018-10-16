#include <cstdio>
#include <iostream>


typedef struct
{
	int acc_num;
	float begin_b,total_cha,total_cre,create_limit;
} person;
int main()
{
	
	person p;

	while(printf("Enter account number (-1 to end):"),scanf("%d",&p.acc_num)==1 && p.acc_num!= -1)
	{
		printf("Enter beginning balance: ");
		scanf("%f",&p.begin_b);
		
		printf("Enter total charges: ");
		scanf("%f",&p.total_cha);
		
		printf("Enter total credits: ");
		scanf("%f",&p.total_cre);

		printf("Enter credit limit: ");
		scanf("%f",&p.create_limit);
		
		float left = p.begin_b + p.total_cha - p.total_cre - p.create_limit;

		if (left > 0)
		{
			printf("Account:     %d \n",p.acc_num);
			printf("Credit limit: %f \n",p.create_limit);
			printf("balance: %f \n",p.begin_b + p.total_cre);
			printf("Credit Limit Exceeded ");
		}

		printf("\n");
			
	}

	
    return 0;
}
