#include <iostream>

using namespace std;
void bubble_sort(int array[], int size) {
  for (int step = 0; step < (size-1); ++step) {
    int swapped = 0;
    for (int i = 0; i < (size-step-1); ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}
int main() {
  int data[] = {4, 3, 5, 1, 2};
  int size = sizeof(data) / sizeof(data[0]);  
  bubble_sort(data, size);
  cout << "Sorted array: \n";
  printArray(data, size);
}
