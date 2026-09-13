# include <stdio.h>

int main(void)
{
	const int max=25;
	int x,i;
	int isPrime[max];
	for(i=0;i<max;i++){
		isPrime[i]=1;
	}
	for(x=2;x<max;x++){
		if (isPrime[x]){
			for(i=2;i*x<max;i++){
			isPrime[i*x]=0;
			}
		}
		
	}
	for(i=2;i<max;i++){
		if(isPrime[i]){
			printf("%d\n",i);
		}
	}
	return 0;
}
