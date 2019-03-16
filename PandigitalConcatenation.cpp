// CPP program to count PanDigital pairs 
#include <bits/stdc++.h> 
using namespace std; 

const int pandigitalMask = ((1 << 10) - 1); 

void computeMaskFrequencies(vector<string> v, map<int, 
										int>& freq) 
{ 
	for (int i = 0; i < v.size(); i++) { 
		int mask = 0; 

		// Stores digits present in string v[i] 
		// atleast once. We use a set as we only 
		// need digits which exist only once 
		// (irrespective of reputation) 
		unordered_set<int> digits; 
		for (int j = 0; j < v[i].size(); j++) 
			digits.insert(v[i][j] - '0'); 

		// Calculate the mask by considering all digits 
		// existing atleast once 
		for (auto it = digits.begin(); it != digits.end(); it++) { 
			int digit = (*it); 
			mask += (1 << digit); 
		} 

		// Increment the frequency of this mask 
		freq[mask]++; 
	} 
 
} 

// Returns number of pairs of strings resulting 
// in Pandigital Concatenations 
int pandigitalConcatenations(map<int, int> freq) 
{ 
	int ans = 0; 

	// All possible strings lie between 1 and 1023 
	// so we iterate over every possible mask 
	for (int i = 1; i <= 1023; i++) { 
		for (int j = 1; j <= 1023; j++) { 

			// if the concatenation results in mask of 
			// Pandigital Concatenation, calculate all 
			// pairs formed with Masks i and j 
			if ((i | j) == pandigitalMask) { 
				if (i == j) 
					ans += (freq[i] * (freq[i] - 1));			 
				else
					ans += (freq[i] * freq[j]);			 
			} 
		} 
	} 

	// since every pair is considers twice, 
	// we get rid of half of these 
	return ans/2; 
} 

int countPandigitalPairs(vector<string> v) 
{ 
	// Find frequencies of all masks in 
	// given vector of strings 
	map<int, int> freq; 
	computeMaskFrequencies(v, freq); 
   for(int i=0;i<=1023;i++)
    cout<<i<<" "<<freq[i]<<endl;
	
	// Return all possiblg concatenations. 
	return pandigitalConcatenations(freq); 
} 

// Driver code 
int main() 
{ 
	vector<string> v = {"123567", "098234", "14765", "19804"}; 
	cout << countPandigitalPairs(v) << endl; 
	return 0; 
} 
