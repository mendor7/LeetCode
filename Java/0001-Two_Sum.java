import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> values = new HashMap<>();
        int[] indices = new int[2];

        for (int i = 0; i < nums.length; i++) {
            if (values.get(target - nums[i]) == null) {
                values.put(nums[i], i);
            }
            else {
                indices[0] = i;
                indices[1] = values.get(target - nums[i]);
                break;
            }
        }
        
        return indices;
    }   
}