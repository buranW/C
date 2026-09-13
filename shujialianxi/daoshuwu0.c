# include <stdio.h>

int main()
{
	int x,y,a;
	scanf("%d",&x);
	y=0;
	while(x>0){
		a=x%10;
		x=x/10;
		y=y*10+a;
	}
	printf("%d",y);
	return 0;
}
