class Solution {
public:
    bool isAns(int w, vector<int> weights, int days){
        int lenw = weights.size();
        int total = 0;
        int dayReq = 1;
        for(int i = 0;i < lenw;i++){
            if(w < weights[i])
                return false;
            if(total + weights[i] <= w)
                total += weights[i];
            else{
                dayReq++;
                total = weights[i];
            }
        }
        return dayReq <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 1;
        int h = 500*50000;
        // int ans = -1;
        while(l < h){
            int mid = (l + h)/2;
            if(isAns(mid, weights, days)){
                h = mid;
            }else l = mid + 1;
        }
        
        return l;
    }
};
