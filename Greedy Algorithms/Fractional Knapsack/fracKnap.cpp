// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  
    static bool comp(pair<int,int>val1,pair<int,int>val2){
        double v1=val1.first*1.0/val1.second;
        double v2=val2.first*1.0/val2.second;
        return (v1>v2);
        
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {
        vector<pair<int,int>>t;
        int n=val.size();
        for(int i=0;i<n;i++)
            t.push_back({val[i],wt[i]});
        
        sort(t.begin(),t.end(),comp);
        double ans=0;
        int i=0;
        while(cap>0 && i<n){
            int w=t[i].second;
            if(cap-w>0){
                ans+=t[i].first;
                cap-=w;
            }
            else{
                int w=t[i].second;
                int x=t[i].first;
                ans+=(x*1.0/w)*cap;
                cap=0;
            }
            i++;
            
        }
        
        return ans;
        
    }
};
