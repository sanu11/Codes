class Solution {
public:
    string toLowerCase(string str) {
        int length = str.length();
        for(int i=0;i<length;i++)
            str[i]=tolower(str[i]);
        
    return str;
}