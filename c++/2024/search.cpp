#include <iostream>

using namespace std ;

int main() {
	int target ;
	int nums[] = {20 , 500 , 4 , 28 , 37 , 9 , 10 , 21} ;
	int length = sizeof(nums) / sizeof(nums[0]) ; 
	// dividing the size of int[] in bytes by the size of int in bytes

	cout << "What number are you looking for: " ;
	cin >> target ;

	for(int i = 0 ; i < length ; i++) {
		if(nums[i] == target) {
			cout << "Found at index " << i << ".\n" ;
			return 0 ;
		}
	}
	
	cout << "Not found in the array.\n" ;
	return 1 ;
}
