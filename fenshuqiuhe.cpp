# include <stdio.h>

int main()
{
	int n,count;
	double sum=0,a=1,b=1,t;
	scanf("%d",&n);
	for(count=1;count<=n;count++){
		t=b;
		b+=a;
		a=t;
		sum+=1.0*b/a;
	}
	printf("%.2f",sum);
	return 0;
}
