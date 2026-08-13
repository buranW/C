# include <stdio.h>

void minmax(int a[],int len,int *max,int *min);

int main(void)
{
	int a[]={1,2,3,4,5,6};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("%d %d",max,min);
	return 0;
}

void minmax(int a[],int len,int *max,int *min)
{
	int i;
	*min=*max=a[0];
	for(i=0;i<len;i++){
		if(*min>a[i]){
			*min=a[i];
		}
		if(*max<a[i]){
			*max=a[i];
		}
	}
}
