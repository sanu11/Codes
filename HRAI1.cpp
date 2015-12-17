#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> v)
{    
    if(v[n-1][n-1]=='p')
    {
        for(int i=0;i<n/2;i++)
        cout<<"DOWN\n";
        for(int i=0;i<n/2;i++)
        cout<<"RIGHT\n";
    }
     
    else if(v[0][0]=='p')
    {
        for(int i=0;i<n/2;i++)
        cout<<"UP\n";
        for(int i=0;i<n/2;i++)
        cout<<"LEFT\n";
    }
        else if(v[n-1][0]=='p')
   {
        for(int i=0;i<n/2;i++)
        cout<<"DOWN\n";
        for(int i=0;i<n/2;i++)
        cout<<"LEFT\n";
    }
            else
    {
        for(int i=0;i<n/2;i++)
        cout<<"UP\n";
        for(int i=0;i<n/2;i++)
        cout<<"RIGHT\n";   
            }
}
int main(void) {

    int m;
    vector <string> grid;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
