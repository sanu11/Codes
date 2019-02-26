#include<bits/stdc++.h>
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    // std::remove_if (paragraph.begin (), paragraph.end (), ispunct);

    std::istringstream buf(paragraph);
    std::istream_iterator<std::string> beg(buf), end;

    std::vector<std::string> tokens(beg, end); // done!

        std::map<string,int> mp;
        int n = tokens.size();
        int m = banned.size();
        string temp = "";
        string retStr ="";
       map<string,int>::iterator it;
        for(int i=0;i<n;i++){
            temp = tokens[i];
            retStr = "";
            std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            
            for(int i = 0; i < temp.length(); i++){
                if(!ispunct(temp[i])){
                    retStr += temp[i];
                }
            }

            
            it = mp.find(retStr);
            if(it!=mp.end())
                it->second++;
            else
                mp.insert(make_pair(retStr,1));
            
        }
    int mx =-1;
    string freqword="";
    int flag=0;
    for(it=mp.begin();it!=mp.end();it++){
        flag=0;
        cout<<it->first<<" "<<it->second<<endl;
        for(int i=0;i<m;i++){
            if(it->first==banned[i])
                flag=1;
            }
        if(!flag){
            if(it->second>mx){
                
                mx = it->second;
                freqword = it->first;
            }
            
        }
        
    }
        return freqword;
        
    }
};