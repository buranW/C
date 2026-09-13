/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
# include <stdio.h>
# include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int n,target;
    printf("数目");
    scanf("%d",&n);
    int *nums=(int*)malloc(n*sizeof(int));
    printf("元素");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("目标");
    scanf("%d",&target);
    int returnSize;
    int *result=twoSum(nums,n,target,&returnSize);
    if(returnSize==2){
        printf("[%d,%d]",result[0],result[1]);
        free(result);
    }else{
        printf("无结果");
    }
    free(nums);
    return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    int *result=(int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
            result[0]=i;
            result[1]=j;
            *returnSize=2;
            return result;
            }      
        }
    }
    *returnSize=0;
    return NULL;
}
