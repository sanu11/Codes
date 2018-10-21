    #include<bits/stdc++.h> 
    using namespace std; 
    int cnt;
    class Graph 
    { 
        int n;    
      
        list<int> *adj; 
      
        void DFSUtil(int v, bool visited[]); 
    public: 
        Graph(int n);   
        void addEdge(int v, int w); 
        void connectedComponents(); 
    }; 
     
    void Graph::connectedComponents() 
    { 
      
        bool *visited = new bool[n]; 
        for(int v = 0; v < n; v++) 
            visited[v] = false; 
      
        for (int v=0; v<n; v++) 
        { 
            if (visited[v] == false) 
            { 
                cnt++;
                if(cnt>1)
                    break;
                DFSUtil(v, visited);  
            } 
        } 
        // cout<<cnt<<endl;
    } 
      
    void Graph::DFSUtil(int v, bool visited[]) 
    { 
       
        visited[v] = true; 
       
        list<int>::iterator i; 
        for(i = adj[v].begin(); i != adj[v].end(); ++i) 
            if(!visited[*i]) 
                DFSUtil(*i, visited); 
    } 
      
    Graph::Graph(int n) 
    { 
        this->n = n; 
        adj = new list<int>[n]; 
    } 
      
    void Graph::addEdge(int v, int w) 
    { 
        adj[v].push_back(w); 
        adj[w].push_back(v); 
    } 
      
    int gcd(int a, int b) 
    { 
        if (b == 0) 
            return a; 
        return gcd(b, a % b);  
    } 

    int coprime(int a, int b) { 
          
      int temp;
        if(a>b)
            temp = gcd(a,b);
        else
            temp = gcd(b,a);

        if ( temp == 1) 
           return 1;  
        else
            return 0;        
    }
    int main() 
    { 
        int t,n;
        cin>>t;
        while(t--){

            cnt=0 ;

            cin>>n;
            int a[n];
            Graph g(n); 

            for(int i=0;i<n;i++)
                cin>>a[i];
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    if(coprime(a[i],a[j])==1){
                        g.addEdge(i, j); 
                    }
                }
            }
        int flag=0;
        g.connectedComponents(); 


        int ct=0;
        //check if all 47s
        for(int i=0;i<n;i++)
            if(a[i]==47)
                ct++;
            
            //only 47 output should be 0
        if(ct==n&&n!=1){
            cout<<"1"<<endl;
            for(int i=0;i<n-1;i++)
                cout<<a[i]<<" ";
            cout<<"5"<<endl;
            continue;
        }
        // cout<<cnt<<endl;
        
        if(cnt==1){

            cout<<"0"<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else {
            cout<<"1"<<endl;    
            for(int i=0;i<n-1;i++)             
                    cout<<a[i]<<" ";
              cout<<47<<" "<<endl;  
        }
    }

        return 0; 
} 
