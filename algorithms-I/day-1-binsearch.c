int search(int* nums, int numsSize, int target){
    
    int low = 0;
    int high = numsSize - 1;
    int middle = 0;
    
    while (low <= high) {
        int middle = (low+high)/2;
            
        if(nums[middle] > target) {
            high = middle - 1;
            
        } else if(nums[middle] < target) {
            low = middle + 1;
        } else {
            return middle;
        }
    }
    
    return -1;
}

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    
    int low = 0;
    int high = n;
    int middle = 0;
    
    while (low < high) {
        int middle = (low+(high-low)/2);
            
        if(isBadVersion(middle)) {
            high = middle;
            
        } else {
            low = middle + 1;
        }
    }
    
    return low;
}

int searchInsert(int* nums, int numsSize, int target){
    
    int low = 0;
    int high = numsSize - 1;
    int mid = 0;
    
    while (low <= high) {
        mid = (low+high)/2;
            
        if(nums[mid] > target) {
            high = mid - 1;
        } else if(nums[mid] < target) {
            low = mid + 1;
        } else if(nums[mid] == target) {
            return mid;
        } 
        
    }
    
    return low;

}