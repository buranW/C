# include <stdio.h>

int main()
{
	int a,n,x;
	int sum=0;
	int i;
	int t=0;
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++){
			t=t*10+a;
			sum+=t;
	}
	printf("%d",sum);
	return 0;
}
