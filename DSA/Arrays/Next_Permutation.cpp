class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1; 
        // Initialize 'pivot' to -1, indicating that no pivot has been found yet.

        int n = nums.size(); 
        // Get the size of the input vector.

        for (int i = n - 2; i >= 0; i--) { 
            // Start from the second-to-last element and iterate backwards:
            if (nums[i] < nums[i + 1]) { 
                // If the current element is smaller than the next element:
                pivot = i; // Found the pivot index
                break; 
                // Exit the loop since we've found the pivot.
            }
        }

        if (pivot == -1) { 
            // If no pivot was found:
            reverse(nums.begin(), nums.end()); 
            // Reverse the entire array (to get the lexicographically smallest permutation).
            return; 
        }

        for (int i = n - 1; i > pivot; i--) { 
            // Find the element to swap with the pivot:
            if (nums[i] > nums[pivot]) { 
                swap(nums[i], nums[pivot]); 
                // Swap the pivot element with the found element.
                break; 
            }
        }

        int i = pivot + 1, j = n - 1; 
        // Reverse the subarray after the pivot:
        while (i <= j) {
            swap(nums[i], nums[j]); 
            i++; 
            j--; 
        }
    }
};