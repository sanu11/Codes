// C++ program for weighted job scheduling using Dynamic 
// Programming and Binary Search 
#include <iostream> 
#include <algorithm> 
using namespace std; 
int *backIndex;
int *inc;
// A job has start time, finish time and profit. 
struct Job 
{ 
	int start, finish, profit; 
	// int include;

}; 

// A utility function that is used for sorting events 
// according to finish time 
bool myfunction(Job s1, Job s2) 
{ 
	return (s1.finish < s2.finish); 
} 

// A Binary Search based function to find the latest job 
// (before current job) that doesn't conflict with current 
// job. "index" is index of the current job. This function 
// returns -1 if all jobs before index conflict with it. 
// The array jobs[] is sorted in increasing order of finish 
// time. 
int binarySearch(Job jobs[], int index) 
{ 
	// Initialize 'lo' and 'hi' for Binary Search 
	int lo = 0, hi = index - 1; 

	// Perform binary Search iteratively 
	while (lo <= hi) 
	{ 
		int mid = (lo + hi) / 2; 
		if (jobs[mid].finish <= jobs[index].start) 
		{ 
			if (jobs[mid + 1].finish <= jobs[index].start) 
				lo = mid + 1; 
			else
				return mid; 
		} 
		else
			hi = mid - 1; 
	} 

	return -1; 
} 

// The main function that returns the maximum possible 
// profit from given array of jobs 
int findMaxProfit(Job arr[], int n) 
{ 
	// Sort jobs according to finish time 
	sort(arr, arr+n, myfunction); 

	// Create an array to store solutions of subproblems. table[i] 
	// stores the profit for jobs till arr[i] (including arr[i]) 
	int *table = new int[n]; 
	table[0] = arr[0].profit; 
	inc = new int[n];
	backIndex = new int[n];
	backIndex[0]=-1;
	inc[0]=1;
    
    // Fill entries in table[] using recursive property 
	for (int i=1; i<n; i++) 
	{ 
		// Find profit including the current job 
		int inclProf = arr[i].profit; 
		int l = binarySearch(arr, i); 
		if (l != -1) {
			inclProf += table[l];
		}
		/*
			The reason to add two array instead of one:
			only adding backIndex[] while give index to the previous job that is included in the set.
			But to know whether the curent job is included or not, we need another array.
			Example:  jobs: (2,5,12) (3,4,10) (5,6,12)
					  backIndex[0]=-1
					  backIndex[1]=1
					  backIndex[2]=0
					  inc[0]=1
					  inc[1]=0
					  inc[2]=1
			backIndex[1]=1 says that if we had 2 jobs: (2,5,10) and (3,4,12)  include 1st job, but it doesnt say  
			 whether to include (3,4,12) or not. Therefore inc[1]=0 will make it clear that 2nd job is not included. Skip it and go to 1st.
			Since that gives maximum profit.
		*/



		// Store maximum of including and excluding 
		if(inclProf>table[i-1]){
			// stores profit of jobs including current job
			table[i] = inclProf;
			// this means the current job is included
			inc[i]=1;
			// this stored the index of previous job that is included. It is used while printing the set of jobs.
			backIndex[i]=l;
		}
		else{
			// Profit till previous job is greater than then the set of jobs includng current job.
			table[i] = table[i-1];
			// current job is not included.
			inc[i]=0;
			// we have to backtrack to previous job to find the set that gives maximum profit.
			backIndex[i]=i-1;
		} 
	} 

	// Store result and free dynamic memory allocated for table[] 
	int result = table[n-1]; 
	return result; 
} 

// Driver program 
int main() 
{ 

	Job arr[] = {{2,6,12}, {3,7,10}, {5,6,12},{7,9,14},{1,2,10}}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << "Optimal profit is " << findMaxProfit(arr, n)<<endl; 
    int i = n-1;

    // displays all jobs that maximises profit.
    cout <<"Jobs included are: \n";
    while(1){

    	//if current job is included print it. And go to previous job using backIndex[currentjob]
		if(inc[i]!=0){
			cout<<arr[i].start<<" "<<arr[i].finish<<" "<<arr[i].profit<<endl; 
		}
		if(backIndex[i]==-1)
			break;  

		i = backIndex[i];

    }
    cout<<endl;
	return 0; 
} 
