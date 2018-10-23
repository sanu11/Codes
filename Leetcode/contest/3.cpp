#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
std::vector<int> n;
    int getdigits(int N){
        int c=0;
        while(N){
            // <<N%10<<endl;
            n.push_back(N%10);
            N=N/10;
            c++;

        }

        int temp;
        for(int i=0;i<c/2;i++){
          temp = n[i];
          n[i] = n[c-i-1];
          n[c-i-1]=temp;

        }


        return c;

    }



    int atMostNGivenDigitSet(vector<string>& D, int N) {

        int sizeD = D.size();
        int sizeN = getdigits(N);
        long long total=0;
        for(int i=1;i<=sizeN-1;i++){
        total+= pow(sizeD,i);
        }
        sort(D.begin(),D.end());

        int i=0,j=0,c=0,temp=1,count=0;
        //cout<<total<<endl;
        //std::cout <<sizeD<< ' '<<sizeN<<   " " <<n[sizeN-1]<<'\n';
        int flag=0;
        int flag2=0;
        while(i<sizeN&&j<sizeD){
        flag=0;
        c=0;
        //cout<<i<<endl;
        while(j<sizeD&&stoi(D[j])<n[i]){
            flag=1;
            c++;
            j++;
          }
          //cout<<c<<" "<<i<<" "<<j<<" "<<endl;
          if(flag){
            total+=c*pow(sizeD,sizeN-i-1);
          }
          //cout<<total<<endl;
          //all elements are less than n[i]
          if(c==sizeN)
          break;

          //increment if d[j]=n[i]
          i++;
          j=0;
          //cout<<i<<" "<<j<<" "<<c<<endl;

    }
    return total;
  }
};

int main(){
  Solution s;
  std::vector<string> d{"4","8","3"};
  int in;
  cin>>in;
  cout<<s.atMostNGivenDigitSet(d,in);
return 0;
}
