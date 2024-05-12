class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
    int counter=0;
    long long max=0;
    sort(happiness.begin(),happiness.end());
    reverse(happiness.begin(),happiness.end());
    for(int i=0;i<happiness.size();i++)
    {
        if(k==0)
        break;

        if(happiness[i]-counter>0)
        {
            max=max+happiness[i]-counter;
        }
        counter++;
        k--;
    }
    return max;
    }
};