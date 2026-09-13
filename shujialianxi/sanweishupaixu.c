# include <stdio.h>

int main()
{
	int a,i,j,k,count;
	scanf("%d",&a);
	i=a;
    while(i<=a+3){
    	j=a;
    	while(j<=a+3){
    		k=a;
			while(k<=a+3){
			if(i!=j&&i!=k&&j!=k){
				count++;
				if(count%6!=0){
				printf("%d%d%d ",i,j,k);
				}else{
					printf("%d%d%d\n",i,j,k);
				}
			}
			k++;
			}
    		j++;
		}
    	i++;
	}
	
	return 0;
}
