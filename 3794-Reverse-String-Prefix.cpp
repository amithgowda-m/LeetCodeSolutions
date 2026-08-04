class Solution {
public:
    string reversePrefix(string s, int k) {
        int i= 0;
        int j = k-1;
        while(i<j){
            auto temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++,j--;
        }
        return s;
    }
};