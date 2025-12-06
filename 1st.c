#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j] == target){
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
    return returnSize;
}

int main(){

    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *arr = malloc(size*sizeof(int));
    // int *arr = (int*)calloc(size, sizeof(int));   

    for(int i=0; i<size; i++){
        printf("Enter %d index : ", i);
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter target : ");
    scanf("%d", &target);

    int *returnSize = malloc(2*sizeof(int));

    twoSum(arr, size, target, returnSize);

    printf("[%d, %d]", returnSize[0], returnSize[1]);

    return 0;
}