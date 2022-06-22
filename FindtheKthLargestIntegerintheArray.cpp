class compare {
public:    // as we need to access the funtion of this class outside this class
    
    bool operator()(string &s1, string &s2)
    {
        if(s1.size()<s2.size())  return false;
        else if(s1.size()==s2.size()) if(s1<=s2) return false;
        return true;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
      priority_queue<string, vector<string>, compare> pq;
        for(int i =0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};
