# include <stdio.h>

int main()
{
	int n,i;
	double sum=0,sign=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign/i;
		sign=-sign;
	}
	printf("%f",sum);
	return 0;
 } 
