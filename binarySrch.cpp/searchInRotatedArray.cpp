#include<iostream>
using namespace std;
 int getPivot(vector<int>& nums, int n) {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;

        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int binarySearch(vector<int>& nums, int start, int end, int key) {
        while (start <= end) {
            int mid = start + (end - start) / 2; // for valuse within the integer limit
            if (nums[mid] == key) {
                return mid;
            }
            // for going to right part
            if (key > nums[mid]) {
                start = mid + 1;
            } else {    //for going to left part
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        }
         else 
        {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
