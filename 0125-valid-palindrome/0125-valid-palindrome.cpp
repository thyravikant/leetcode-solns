class Solution {
private:
    bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        return true;
        else
        return false;
    }
    char lower(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
        else
        return ch-'A'+'a';
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i]))
            temp.push_back(s[i]);
        }
         for(int i=0;i<temp.length();i++){
            temp[i]=lower(temp[i]);
         }
         int st=0;
         int e=temp.length()-1;
        while(st<e){
            if(temp[st]!=temp[e])
            return false;
            else
            st++;
            e--;
        }
        return true;
    }
};