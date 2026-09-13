# include <stdio.h>

int main()
{
	int x,i,t,count;
	count=0;
	//小于20输出20个 
	for(x=2;count<20;x++){
	t=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			t=0;
			break;
		} 	
	}
	if(t==1){
	count++;
	printf("%d ",x);
	}
	}
	return 0;
}
