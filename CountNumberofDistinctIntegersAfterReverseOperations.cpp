class Solution {
public:
    
    int rev(int n){
        int sum = 0;
        while(n){
            int r = n%10;
            sum = sum*10 + r;
            n/=10;
        }
        
        return sum;
    }
    int countDistinctIntegers(vector<int>& nums) {
        
        unordered_set<int> s;
        for(auto i: nums){
            s.insert(i);
            s.insert(rev(i));
        }
        
        

        
        return s.size();
    }
};
