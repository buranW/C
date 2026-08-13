# include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int i=1;
	int n=1;
	while(i<x){
		n*=10;
		i++;
	}
	i=n;
	int a;	
	while(i<n*10){
	int sum=0;
	int j=i;
		while(j>0){
		a=j%10;
		j/=10;
		int count=1;
		int p=1;
		while(count<=x){
			p*=a;
			count++;
		}
		sum+=p;
		}
		if(sum==i){
			printf("%d ",i);
			}
		i++;
	}	
	return 0;
}
