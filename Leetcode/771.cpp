class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int a[53]={0};
          int l1= J.length();
    int l2= S.length();

    for(int i=0;i<l1;i++){
        if(isupper(J[i])){
            a[J[i]-'A']=1;

        }
        else{
            a[J[i]-'a'+26]=1;
        }
    }

    int count=0;
    for(int i=0;i<l2;i++){
        if(isupper(S[i])&&a[S[i]-'A']==1){
            count++;

        }
        else if (islower(S[i])&&a[S[i]-'a'+26]==1){
        //cout<<i<<" "<<a[S[i]-'a'+26]<<"\t";
        count++;
        }
    }
    cout<<count<<endl;
    return count;
        
    }
};