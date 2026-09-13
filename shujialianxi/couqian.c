# include <stdio.h>

int main()
{
	int x,one,two,five;
	scanf("%d",&x);
	for(one=1;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(one+two*2+five*5==x*10){
				printf("%d个一毛%d个二毛%d个五毛换%d元\n",one,two,five,x);
				goto out;
				}
			}
		}
	}out:
	return 0;
}
