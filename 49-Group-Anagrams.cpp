class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        unordered_map<string,vector<string>> anagramMap;

        for(string str : strs){
            char count[26]={0};
            for(char c: str) count[c-'a']++;
            
            string key(count, 26);

            anagramMap[key].push_back(str);
        }
        for(auto& pair : anagramMap) ans.push_back(pair.second);
        return ans;
    }
};