class StockSpanner {
public:
    vector<int>a;
    vector<int>count;
    StockSpanner() {
        char d;
        while(d=getchar()){
            a.push_back((int)(d));

        }
        int n =a.size();

        int temp,c=0;
        for(int i=n-1;i>=0;i--){
            temp =a[i];
            c=0;
            while(a[i]<temp){
                c++;
                i--;
            }
            count[i]=c;
        }

    }

    int next(int price) {
        int n= a.size();
        for(int i=0;i<n;i++)
            if(a[i]==price)
                return count[i];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
