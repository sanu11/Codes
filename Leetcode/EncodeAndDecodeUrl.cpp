#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    map<string,string>url;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {

    hash<string> hash_fn;
    size_t hash = hash_fn(longUrl);
    string encode = to_string(hash);
    encode = "http://tinyurl.com/" +encode;
    url.insert(pair<string,string>(longUrl,encode));
    return encode;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       std::map<string, string>::const_iterator it;
string key;
for (it = url.begin(); it != url.end(); it++)
{
if (it->second == shortUrl)
{
key = it->first;
break;
}
}
        return key;
    }
};

int main(){

  Solution solution;
  cout<<solution.encode("https://leetcode.com/problems/design-tinyurl");
cout<<solution.decode(solution.encode("https://leetcode.com/problems/design-tinyurl"))  ;
}
