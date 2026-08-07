# include <stdio.h>

int main()
{
	int n,m,i,j;
	
	int count=0,sum=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++){
		if(i<2)continue;
     	int t=1;
		for(j=2;j<i;j++){
			if(i%j==0){
			t=0;
			break;
			}
		}
		if(t==1){
			count++;
			sum+=i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}
