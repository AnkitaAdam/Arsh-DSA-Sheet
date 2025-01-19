
class Solution {
  public:

    string printString(string s, char ch, int c) {
        // Your code goes here
        int i=0;
        int count=0;
        
        for(i=0;i<s.length();i++){
            if(s[i]==ch){
                count+=1;
            }
            if(count==c){
                break;
            }
        }
        if(i<s.length()-1){
            return s.substr(i+1,s.length());
        }
        
        return "";
        
    }
};