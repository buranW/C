# include <stdio.h>

int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	/*a   b   t
	  12  18  0
	  18  12  12
	  12  6   6
	  6   0   0*/
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
	return 0;
}
