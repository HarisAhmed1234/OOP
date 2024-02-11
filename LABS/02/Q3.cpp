#include<iostream>

using namespace std;

bool hasSubsetSum(int arr[], int size, int targetSum) {
    if (targetSum == 0) {
        return true; 
    }
    
    if (size == 0) {
        return false;  
    }

    
    if (arr[size - 1] > targetSum) {
        // Recursive case
        return hasSubsetSum(arr, size - 1, targetSum);
    }

    
    return hasSubsetSum(arr, size - 1, targetSum) || hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}

int main() {
    int n, target, i;
    cout << "Enter the size of the integer array: ";
    cin >> n;
    int nums[n];
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    for(i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> nums[i];
    }
    
    if (hasSubsetSum(nums, n, target)) {
        cout << "Subset with sum " << target << " exists." << endl;
    } else {
        cout << "Subset with sum " << target << " does NOT exist." << endl;
    }
    
    return 0;
}
