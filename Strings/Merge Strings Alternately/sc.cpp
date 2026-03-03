class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans="";
        int i=0,j=0;
        int l1=w1.length(),l2=w2.length();
        while(i<l1 or j<l2){
            if(i<l1)
                ans+=w1[i++];
            if(j<l2)
                ans+=w2[j++];
        }
        return ans;
    }
};
