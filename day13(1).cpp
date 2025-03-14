// Problem:You're given a sorted array 'a' of 'n' integers and an integer 'x'.
// Find the floor and ceiling of 'x' in 'a[0..n-1]'.

// Approach:Binary search

// Code:
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	if(a[0]>x){
		return {-1,a[0]};
	}
	if(a[n-1]<x){
		return {a[n-1],-1};
	}
	int l=0;
	int h=n-1;
	int mid,floor,ceil;
	while(l<=h){
		mid=(l+h)/2;
		if(a[mid]==x){
			return {x,x};
		}
		if(a[mid]<x){
			floor=a[mid];
			l=mid+1;
		}
		if(a[mid]>x){
			ceil=a[mid];
			h=mid-1;
		}
	}
	return {floor,ceil};
}
// TC:O(n)
// SC:O(1)