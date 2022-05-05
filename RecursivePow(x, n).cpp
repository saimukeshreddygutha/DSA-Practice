class Solution {
public:
    double Pow(double x, unsigned int nn){
        if(nn == 0)return 1;
        if(nn == 1)return x;
        
        if((nn&1) == 0){
            double r = Pow(x, nn/2);
            return r*r;
        }
        
        return x*Pow(x,(nn-1));
    }
    
    double myPow(double x, int n) {
        
        if(n == 0)return 1;
        if(n == 1)return x;
        unsigned int nn = abs(n);
        
        if(n < 0)return 1/Pow(x, nn);
        
        return Pow(x, nn);
    }
};
