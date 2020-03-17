// ==============================================
// File: recursive.cpp
// ==============================================
// Programmer: Jennifer King
// Created: 3/17/2020
// Last updated: 3/17/2020
// Project: Garmin Interview
// Description:
// ==============================================

#include <iostream>
using namespace std;

//function prototypes
int binarySearch(int arr[], int left, int right, int target);

// == main ==================================================
int main() 
{
  int array[] = {2, 4, 6, 8, 10};
  int x = 2;
  int numElems = sizeof(array)/sizeof(array[0]);
  int result = binarySearch(array, 0, numElems-1, x);
  
  (result == -1) ? cout << "Element is not present in this array." << endl
                 : cout << "Element is present at index " << result << endl;
  
  return 0;
} // end of main


// == binarySearch ===========================================
// 
// This function conducts a search of a binary sorted tree.
//
// Input:
//    arr[]  - the binary sorted tree
//    left   - the left side of the tree
//    right  - the right side of the tree
//    target - the int to be searched for
//
// Output:
//    The index that the target is at, or -1 if the target
//    is not found.
// ==========================================================
int binarySearch(int arr[], int left, int right, int target)
{
  if(right >= left)
  {
    int mid = left + (right - left) / 2;
    
    if(arr[mid] == target)
    {
      return mid;
    }
    if(arr[mid] > target)
    {
      return binarySearch(arr, left, mid - 1, target);
    }
    if(arr[mid] < target)
    {
      return binarySearch(arr, mid+1, right, target);
    }
  }
  
  return -1;
}
