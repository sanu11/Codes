#include <iostream>
#include <string.h>
using namespace std;
#define clear_  memset(arr,0,sizeof(arr));//,memset(brr,0,sizeof(brr));
char arr[20000007];
int main()
{
    ios_base::sync_with_stdio(false);
    long long d;
    cin>>d;
    while(d--)
    {

        cin>>arr;
        if(((strlen(arr)%2)==0)&&(strlen(arr)>1))
        {
            long long i=0;long long j=strlen(arr)/2;
            while(arr[i]==arr[j]&&j<strlen(arr))
            {
                i++;
                j++;
            }
            if(j==strlen(arr))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(strlen(arr)>1)
        {
            long long i=0,j=strlen(arr)/2;
            long long count=j;
            if((arr[i]!=arr[j])&&arr[j+1]==arr[i]&&count)
            {
                j++;
                while(arr[i]==arr[j]&&j<strlen(arr)&&count)
                {
                    i++;
                    j++;count--;
                }
                if(j==strlen(arr)&&(!count))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    if(arr[i+1]==arr[j]&&count&&(i+1)<j)
                    {
                        i++;
                        while(arr[i]==arr[j]&&j<strlen(arr)&&count)
                        {
                            i++;
                            j++;count--;
                        }
                        if(j==strlen(arr)&&(!count))
                            cout<<"YES"<<endl;
                        else
                            cout<<"NO"<<endl;
                    }
                    else
                        cout<<"NO"<<endl;
                }
            }
            else if(arr[i]!=arr[j]&&arr[i+1]==arr[j+1]&&count)
            {
                i++;j++;
                while(arr[i]==arr[j]&&j<strlen(arr)&&count)
                {
                    i++;count--;
                    j++;
                }
                if(j==strlen(arr)&&(!count))
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(arr[i]==arr[j]&&count)
            {
                long long xlimit=j;
                bool s=true;
                //    cout<<"aaa";
                while((arr[i]==arr[j])&&(j<strlen(arr))&&count)
                {
                    //                cout<<i<<" same "<<j<<endl;
                    i++;
                    j++;
                    count--;
                }
                //                cout<<xlimit<<endl;
                //                        cout<<i<<j<<endl;
                if((j==strlen(arr)-1)&&(!count))
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    if((arr[i]==arr[j+1])&&((j+1)<strlen(arr))&&count)
                    {
                        //    cout<<"oi";
                        j++;
                        while((arr[i]==arr[j])&&(j<strlen(arr))&&count)
                        {
                            //                            cout<<i<<" -- "<<j<<endl;

                            i++;
                            j++;
                            count--;
                        }
                        if((j==strlen(arr))&&(!count))
                            cout<<"YES"<<endl;
                        else if(j<strlen(arr)&&count)
                        {
                            if(arr[i+1]==arr[j]&&(i+1)<j)
                            {
                                i++;
                            }
                            while((arr[i]==arr[j])&&(j<strlen(arr))&&count)
                            {
                                i++;
                                j++;
                                count--;
                            }
                            if((j==strlen(arr))&&(!count))
                            {
                                cout<<"YES"<<endl;
                            }
                            else
                                cout<<"NO"<<endl;
                        }
                        else
                            cout<<"NO"<<endl;
                    }
                    else
                    {
                        i++;j++;
                        //        cout<<i<<endl;
                        while((arr[i]==arr[j])&&(j<strlen(arr))&&count)
                        {
                            //            cout<<i<<" "<<j<<endl;
                            i++;
                            j++;
                            count--;
                        }
                        if((j==strlen(arr))&&(!count))
                            cout<<"YES"<<endl;
                        else
                            cout<<"NO"<<endl;
                    }
                }
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
