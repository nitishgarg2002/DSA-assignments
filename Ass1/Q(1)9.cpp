
#include "iostream" 
#include "unordered_map" 
using namespace std; 

void removeDups(int arr[], int n) 
{ 
	
	unordered_map<int, bool> mp; 

	for (int i = 0; i < n; ++i) { 
		if (mp.find(arr[i]) == mp.end()) { 
			cout << arr[i] << " "; 
		} 

		mp[arr[i]] = true; 
	} 
} 

int main(int argc, char const* argv[]) 
{ 
	int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	removeDups(arr, n); 
	return 0; 
} 

