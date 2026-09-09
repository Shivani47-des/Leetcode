class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;

        int size = n / 2;
        vector<bool> isPrime(size, true);

        isPrime[0] = false;

        for(int i = 3; i * i < n; i += 2) {

            if(isPrime[i / 2]) {

                for(int j = i * i; j < n; j += 2 * i) {
                    isPrime[j / 2] = false;
                }
            }
        }

        int count = 1; 

        for(int i = 3; i < n; i += 2) {
            if(isPrime[i / 2])
                count++;
        }

        return count;
    }
};