#include<bits/stdc++.h>
using namespace std;
	class Customer{
public:
	int id;
	int shares;
	int price;
	int timestamp;
	int flag=0;

Customer(int id,int shares,int price,int timestamp){
	this->id = id;
	this->shares = shares;
	this->price = price;
	this->timestamp = timestamp;

}
 bool operator < (const Customer &cus) const {
        return price > cus.price;
    }

};
int main(){

	struct less_than_key{
	inline bool operator() (Customer *struct1, const Customer *struct2)
    {
        return (struct1->timestamp < struct2->timestamp);
    }
};


	int n,x;
	cin>>n;
	cin>>x;
	Customer *cus;
	int total=0;
	int a,b,c,d;
	std::vector<Customer> v;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		cus = new Customer(a,b,c,d);
		v.push_back(*cus);
	}
	cin>>total;
	sort(v.begin(),v.end());
	std::vector<Customer>:: iterator itr;
	int temp1;
	for(int i=0;i<n;i++){
		if(total==0){
			break;
		}
		if((i+1)<n&&v[i].price!=v[i+1].price){
			if(v[i].shares<=total){
				total-=v[i].shares;
				v[i].flag=1;
			}
			else
				total=0;
				v[i].flag=1;
		}
		else{
			temp1 = v[i].price;
				
				vector<Customer*> temp;
				temp.push_back(&v[i]);
				i++;
			while(temp1==v[i].price&&i<n){
				temp.push_back(&v[i]);
				i++;
			}
			sort(temp.begin(),temp.end(),less_than_key());
			int id2;
			int index=0;
			
			
			while(total>0&&temp.size()>0){
				if(total==0)
					break;
			int size2 = temp.size();
			
			int min2 =temp[0]->shares;
			// cout<<"tem"<<temp.size()<<endl;

			for(int i=0;i<size2;i++){
				if(temp[i]->shares<min2){
					min2 = temp[i]->shares;
					id2 = temp[i]->id;
					index= i;
				}
			}
			// cout<<"min"<<min2<<"ind"<<index<<"otal"<<total<<endl;
			
			int x = total/size2;
			// cout<<x<<" "<<total<<"l"<<endl;
			if(x>0){
				if(x>=min2){
					total-= min2*size2;
					temp.erase(temp.begin()+index);
					for(int i=0;i<size2;i++)
						temp[i]->flag=1;
					continue;

				}
				//others wont get shares
				else{
					for(int i=0;i<total;i++)
						temp[i]->flag=1;
					total=0;
				}

			}
			else{
				for(int i=0;i<total;i++){
						temp[i]->flag=1;

					}
					total=0;
				}

			}	



	}
}

for(int i=0;i<n;i++){
	if(v[i].flag==0)
		cout<<v[i].id<<endl;
}


	return 0;
}