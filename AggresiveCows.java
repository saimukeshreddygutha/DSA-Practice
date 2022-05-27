import java.util.*;
class AggresiveCows{
    public static boolean  isValid(int a[], int n, long m, int k){

        int c = 1, j = 0;
        long  s = 0;
        for(int i = 1;i < n;i++){
            s = a[i] - a[j];
            if(s >= m){
                j = i;
                c++;
            }
        }
        if(c >= k)return true;
        return false;

    }
    public static long aggresive(int a[], int n,int k){
        long l = 0;
        long h = 1000000000;
        long ans = -1;
        while(l <= h){

            long mid = (l + h)/2;
            if(isValid(a, n, mid, k)){
                l = mid + 1;
                ans = mid;
            }else h = mid - 1;
        }
        return ans;
    }
    public static void main(String[] args) {
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        while(t-->0){
            int n, k;
            n = s.nextInt();
            k = s.nextInt();
            int a[] = new int[n];
            for(int i = 0;i < n;i++)a[i] = s.nextInt();
            Arrays.sort(a);
            System.out.println(aggresive(a, n, k));
        }
    }
}