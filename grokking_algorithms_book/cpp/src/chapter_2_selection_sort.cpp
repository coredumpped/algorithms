#include <iostream>
#include <vector>

int findSmallest(std::vector<int> arr) {
  int smallestIndex = 0;
  int smallest = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
      smallestIndex = i;
    }
  }

  return smallestIndex;
}

void printArray(std::vector<int> numbers) {
  for (int number : numbers) {
    std::cout << number << " ";
  }
  std::cout << std::endl;
}

void selection_sort() {
  std::vector<int> sortedArray;
  std::vector<int> unsortedArray = {8, 11, 4, 9, 2, 3};

  std::cout << "Selection Sort\n";
  std::cout << "Unsorted array ";
  printArray(unsortedArray);
  int size = unsortedArray.size();

  for (int i = 0; i < size; i++) {
    int smallestIndex = findSmallest(unsortedArray);
    sortedArray.push_back(unsortedArray[smallestIndex]);
    unsortedArray.erase(unsortedArray.begin() + smallestIndex);
  }
  std::cout << "Sorted array ";

  printArray(sortedArray);
}

void chapter_2() { selection_sort(); }
