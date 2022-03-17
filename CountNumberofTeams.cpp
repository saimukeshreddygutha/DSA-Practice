class Solution {
public:
    /*
    TLE O(n^3) BruteForce Approach
    */
    int numTeams(vector<int>& rating) {
        
        int n = rating.size();
        int ans = 0;
        
        for(int i = 0;i < n-2;i++){
            for(int j = i+1 ; j < n-1;j++){
                if(rating[i]<rating[j]){
                    for(int k = j+1;k < n;k++){
                        if(rating[j]<rating[k])
                            ans++;
                    }
                }
                else{
                    for(int k = j+1;k < n;k++){
                        if(rating[j]>rating[k])
                            ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};
