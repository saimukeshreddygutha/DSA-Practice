class Solution {
	public:
		vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) 
		{
			stack<int> st;
			map<int,int> mp;
			int n=nums.size();
			for(int i=n-1;i>=0;i--)
			{ 
				while(!st.empty() && st.top()<=nums[i])
					st.pop();
				if(i<n)
				{
					if(st.empty()==false)
						mp[nums[i]]=st.top();
					else
						mp[nums[i]]=-1;
				}   
				st.push(nums[i]);
			}
			vector<int> ans;
			for(int i=0;i<nums1.size();i++)
			{
				ans.push_back(mp[nums1[i]]);
			}
			return ans;
		}
	};
