#include <iostream>
#include <vector>
#include <algorithm> // For random_shuffle

int main() {
    // Create an unsorted array of 1000 elements
    std::vector<int> arr(1000);

    // Generate random numbers and fill the array
    for (int i = 0; i < 1000; ++i) {
        arr[i] = rand(); // Replace rand() with a more suitable random number generator if needed
    }

    // Randomly shuffle the array to ensure it's unsorted
    std::random_shuffle(arr.begin(), arr.end());

    // Print the unsorted array (optional)
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}