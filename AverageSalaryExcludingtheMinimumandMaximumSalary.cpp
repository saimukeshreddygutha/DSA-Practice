class Solution {
public:
    double average(vector<int>& salary) {
        long total = 0;
        int max = 999;
        int mn = (int)1e6+1;

        for(int i = 0;i < salary.size();i++){
            total += salary[i];

            if(max < salary[i])max = salary[i];
            if(mn > salary[i])mn = salary[i];

        }

        total = total - max - mn;
        return total/((salary.size()-2) * 1.0);
    }
};
