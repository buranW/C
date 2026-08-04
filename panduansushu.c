# include <stdio.h>

int main()
{
	int x,i,t;
	t=1;
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i==0){
			t=0;
			break;
		} 
	}
	if(t==0){
	printf("不是素数");
	}else {
	printf("是素数");
	}
	return 0;
}
