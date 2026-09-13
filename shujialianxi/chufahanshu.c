# include <stdio.h>

int devide(int a,int b,int *result);

int main(void)
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(devide(a,b,&c)){
		printf("%d/%d=%d",a,b,c);
	}	
	return 0;
}

int devide(int a,int b,int *result)
{
	int ret=1;
	if (b==0)ret=0;
	else *result=a/b;
	return ret;
}
