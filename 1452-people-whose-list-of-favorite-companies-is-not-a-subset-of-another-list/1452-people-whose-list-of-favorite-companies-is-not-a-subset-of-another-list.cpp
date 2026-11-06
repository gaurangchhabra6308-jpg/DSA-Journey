class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        int n=favoriteCompanies.size();
        vector<int>ans;
        for(auto &it:favoriteCompanies){
            sort(begin(it),end(it));
        }
        for(int i=0;i<n;i++){
            bool f=true;
            for(int j=0;j<n&&f;j++){
                if(i==j) continue;
                if(favoriteCompanies[i].size() > favoriteCompanies[j].size())continue;
                    f=!includes(begin(favoriteCompanies[j]),end(favoriteCompanies[j]),begin(favoriteCompanies[i]),end(favoriteCompanies[i]));

                
            }
            if(f)ans.push_back(i);
        }
        return ans;
    }
};