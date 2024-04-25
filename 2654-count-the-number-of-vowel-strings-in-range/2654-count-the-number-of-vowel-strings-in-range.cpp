class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            string target=words[i];
            if(target[0]=='a' || target[0]=='e' || target[0]=='i' || target[0]=='o' || target[0]=='u')
            {
                if(target[target.size()-1]=='a' || target[target.size()-1]=='e' || target[target.size()-1]=='i' || target[target.size()-1]=='o' || target[target.size()-1]=='u')
                {
                    if(i>=left && i<=right)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};