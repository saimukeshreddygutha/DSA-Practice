class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int len = nums.size(), count = 1, current_element = nums[0], last_index = 1;
        for(int i = 1;i < len;i++){
            if(current_element == nums[i]){
                count++;
                if( count == 2){
                    nums[last_index++] = current_element;
                }
            }
            else{
                current_element = nums[i];
                nums[last_index++] = current_element;
                count = 1;
            }
        }
        
        return last_index;
        
    }
};
