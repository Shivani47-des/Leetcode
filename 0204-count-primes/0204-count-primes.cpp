class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;

        // index i represents number (2*i + 1)
        int size = n / 2;
        vector<bool> isPrime(size, true);

        // 1 is not prime
        isPrime[0] = false;

        for(int i = 3; i * i < n; i += 2) {

            // index of i
            if(isPrime[i / 2]) {

                // Start from i*i and consider only odd multiples
                for(int j = i * i; j < n; j += 2 * i) {
                    isPrime[j / 2] = false;
                }
            }
        }

        int count = 1; // number 2

        // Check only odd numbers
        for(int i = 3; i < n; i += 2) {
            if(isPrime[i / 2])
                count++;
        }

        return count;
    }
};