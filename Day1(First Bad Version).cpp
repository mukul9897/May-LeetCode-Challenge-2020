// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// C++ program to implement recursive Binary Search 
using namespace std; 

class Solution {
public:
    int firstBadVersion(int n) {
        return binarySearch(1,n);
    }
    int binarySearch(int l, int r){ 
	    if (r == l) 
            return l;
        
        int mid = l + (r - l) / 2; 
        
		if(isBadVersion(mid)) 
            return binarySearch(l, mid);
        
		return binarySearch(mid + 1, r); 
	} 
};
