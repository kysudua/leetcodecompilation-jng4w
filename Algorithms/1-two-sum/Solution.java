import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mapping = new HashMap<>();
        for (int i = 0; i < nums.length; i++){
            int complement = target - nums[i];
            if (mapping.containsKey(complement))
                return new int[] {mapping.get(complement), i};
            mapping.put(nums[i], i);
        }
        return null;
    }
}