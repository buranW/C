# include <stdio.h>

int main()
{
	int n,i,answer;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		answer*=i;
	}
	printf("%d",answer);
	return 0;
}
