#include <iostream>

int binary_search() {
  int arr[5] = {1, 8, 12, 32, 47};
  int target = 32;
  int low = 0;
  int high = (sizeof(arr) / sizeof(int)) - 1;
  while (low <= high) {
    int mid = (high + low) / 2;
    if (arr[mid] == target) {
      return mid;
    }
    if (arr[mid] > target) {
      high = mid - 1;
    }
    if (arr[mid] < target) {
      low = mid + 1;
    }
  }

  return -1;
}

void chapter_1() {
  int idx = binary_search();
  std::cout << "Target found at index: " << idx << "\n";
}
