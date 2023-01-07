class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int curfuel = 0;

        int n = gas.size();
        int totalGas = accumulate(gas.begin(), gas.end(), 0);
        int totalCost = accumulate(cost.begin(), cost.end(), 0);

        if(totalGas < totalCost)return -1;
        int start = 0;
        for(int i = 0;i < n;i++){
            curfuel += gas[i] - cost[i];
            if(curfuel < 0){
                curfuel = 0;
                start = i + 1;
            }
        }
        return start;

    }
};
