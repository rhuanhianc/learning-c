int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                int* result = (int*)malloc(2 * sizeof(int)); // estudar exatemente isso
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return  result; // como diabos isso funciona?
            }
        }
    }
    return returnSize;
}