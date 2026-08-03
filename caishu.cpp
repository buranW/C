#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int x;
	int count=0;
	printf("准备就绪\n");
	do{
	printf("请猜\n"); 
	scanf("%d",&x);
	count++;
	if(x>a){
		printf("猜大了\n");
	}else if(x<a){
		printf("猜小了\n"); 
	}
	}while(x!=a);
	printf("猜对了，猜了%d次",count);
	return 0;
}
