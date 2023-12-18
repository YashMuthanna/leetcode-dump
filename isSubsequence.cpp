//Easy two pointer approach, 100% time, 85% space
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int cnt = 0;
        while(i < t.length() && j < s.length()){
            if(t[i] == s[j]){
                i++;
                j++;
                cnt++;
            }
            else{
                i++;
            }
        }
        if(cnt == s.length()){
            return true;
        }
        return false;
    }
};
