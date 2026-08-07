# include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,j*i);
			if(j!=i){
			if(i*j<10)printf("  ");
			else printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
/*for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
        printf("%d*%d=%-2d ", j, i, j*i);
    }
    printf("\n");
}*/

