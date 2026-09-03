class Solution {
    public int[] twoSum(int[] nums, int target) {
        int result[] = new int[2];
        int size = nums.length;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(i == j) {
                    continue;
                }

                if(nums[i]+nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return result;
    }
}