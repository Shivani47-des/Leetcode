class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());

        bool odd = false;

        bool canMakeOdd = true;

        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 == 1) {
                odd = true;
            }
            else {
                if(!odd) {
                    canMakeOdd = false;
                    break;
                }
            }
        }

        bool canMakeEven = true;

        
        for(int x : nums1) {
            if(x % 2 == 1) {
                canMakeEven = false;
                break;
            }
        }

        return canMakeOdd || canMakeEven;
    }
};