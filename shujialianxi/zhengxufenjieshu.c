# include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int t=x;
	int n=1;
	while(t>9){
		t/=10;
		n*=10;
	}
	do{
		int a=x/n;
		printf("%d",a);
		if(n>9){
			printf(" ");
		}
		x%=n;
		n/=10;
	}while(n>0);
	return 0;
}
