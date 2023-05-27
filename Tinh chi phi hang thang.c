#include <stdio.h>
#include <math.h>

int main (){
	float exp[10];
	int i;
	float budget,max;
	float total=0;
printf("Enter the budget:\n");
scanf ("%f",&budget);
printf("Enter monthly expenses:\n");
for (i=0;i<10;i++)
{
	printf("Day %d. ",i+1);
	scanf("%f",&exp[i]);
	total+=exp[i];
		if(i==0)
		max=exp[0];
		else
		{
			if(exp[i]>max)
			max=exp[i];
		}
	
}
	for(i=0;i<10;i++)
	{
	if(exp[i]<budget)
	{
	printf("Expenses are within the budget!!\n");
	}
	else 
	{
	printf("Expenses exceed the budget!!\n");
	}
	}
	printf("Highest expense:%f\n",max);
	printf("Total monthly expenses: %f\n",total);

return 0;
}

