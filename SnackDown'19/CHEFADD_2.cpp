#include<bits/stdc++.h>
using namespace std;  
#define ll unsigned int

ll getNextHighestNumber(ll x) 
{ 
  
  ll rightOne; 
  ll nextHigherOneBit; 
  ll rightOnesPattern; 
  
  ll next = 0; 
  
  if(x) 
  { 
  
    rightOne = x & -(signed)x;  
    nextHigherOneBit = x + rightOne; 
    rightOnesPattern = x ^ nextHigherOneBit; 
    rightOnesPattern = (rightOnesPattern)/rightOne; 
    rightOnesPattern >>= 2; 
    next = nextHigherOneBit | rightOnesPattern; 
  } 
  
  return next; 
} 

ll getBits(ll n) 
{ 
  ll count = 0; 
  while (n) 
  { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
} 

ll countSetBits(ll n) 
{ 
  ll count = 0; 
  while (n) 
  { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
} 

ll minNumber(ll a) 
{ 
  
    ll n =  countSetBits(a);
  	
    ll num = (pow(2, n) - 1); 
   
    return num;
} 

int main() 
{ 
  ll t,x,y,a,b,c,mn,bitsA,num,bitsB,count=0;
  scanf("%d",&t);
  while(t--){
	  scanf("%d%d%d",&a,&b,&c);
	  count=0;
	  bitsA = getBits(a);
	  num = minNumber(a);
	  bitsB  =getBits(b);
	  while(num<=c){
	  	b = c - num;
	  	if(getBits(b)==bitsB){
	  		count++;
	  	}
	  	num = getNextHighestNumber(num);

	  }
	 printf("%d\n",count);
  }
  return 0; 
} 
