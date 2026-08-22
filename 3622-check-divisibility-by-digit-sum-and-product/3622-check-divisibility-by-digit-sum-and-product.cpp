class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int num=n;
        while(n>0){
            int digit=n%10;
            n/=10;
            sum+=digit;
            product*=digit;
        }
        int s=sum+product;
        if(num%s!=0){
            return false;
        }
        return true;
    }
};