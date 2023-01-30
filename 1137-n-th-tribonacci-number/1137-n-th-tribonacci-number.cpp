class Solution {
public:
    int tribonacci(int n) {
        int prev1 = 0;
        int prev = 1;
        int curr =1;
        if(n == 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        for(int i =3;i<=n;i++){
            int temp = curr;
            curr = curr+prev+prev1;
            prev1 = prev;
            prev = temp;
        }
        return curr;
    }
};