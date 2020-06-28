class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, vector<string>> umap;
        
        for(vector<string> ticket: tickets)
            umap[ticket[0]].push_back(ticket[1]);
            
        for(auto &i: umap)
            sort(i.second.begin(),i.second.end(),greater<string>());
        
        vector<string> ans;
        traverse("JFK",umap,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    void traverse(string src,unordered_map<string,vector<string>>& umap,vector<string>& ans){
        while(!umap[src].empty()){
            string s=umap[src].back();
            umap[src].pop_back();
            traverse(s,umap,ans);
        }
        ans.push_back(src);
    }
};
