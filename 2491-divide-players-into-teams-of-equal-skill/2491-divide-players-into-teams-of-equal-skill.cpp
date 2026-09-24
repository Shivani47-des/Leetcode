class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();

        sort(skill.begin(), skill.end());

        int target = skill[0] + skill[n - 1];
        long long ans = 0;

        for(int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;

            if(skill[i] + skill[j] != target) {
                return -1;
            }

            ans +=  skill[i] * skill[j];
        }

        return ans;
    }
};