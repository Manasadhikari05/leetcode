class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int count=0;
        for(int i = n/3; i<n; i=i+2) {
            count += piles[i];
        }
        return count;
    }
};