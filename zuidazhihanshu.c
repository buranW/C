# include <stdio.h>

int max(int a,int b)
{
	int ret;
	if(a>b){
		ret=a;
	}else{
		ret=b;
	}
	return ret;
}
int main()
{
	int a=3;
	int b=9;
	int c;
	c=max(1,2);
	c=max(a,b);
}
