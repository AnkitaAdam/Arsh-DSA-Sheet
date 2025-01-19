class Solution {
public:
    bool isPalindrome(string&s, int i,int j){
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start=0;
        int end=s.length()-1;

        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }else{
                return isPalindrome(s,start+1,end)||isPalindrome(s,start,end-1);
            }
        }
        return true;
    }
};