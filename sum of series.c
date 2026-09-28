/*2+5+8+11+14+...upto n terms.
w.c.p to calculate sum of the series*/
#include<stdio.h>
int main()
{
	int term=2,sum=0,i=1,n;
	printf("Enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
		printf("The sum of given series upto n:%d\n",sum);
	return 0;
}
