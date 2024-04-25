class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=0,words;
        for(int i=0;i<sentences.size();i++)
        {
            string target=sentences[i];
            words=0;
            for(int j=0;j<target.size();j++)
            {
                if(target[j]==' ')
                {
                    words++;
                }
            }
            words++;
            if(maxWords<words)
            {
                maxWords=words;
            }
        }
        return maxWords;
    }
};