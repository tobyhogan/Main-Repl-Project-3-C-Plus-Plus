#include <iostream>
#include <vector>

using namespace std;

int main() {
    
  vector<int> array = {1, 8, 2, 6, 3, 5};

  for (int i : array) {
    for (int j = 0; j < array.size() - 1; j++) {
      if (array[j] > array[j + 1]) {
        
        int temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
        
      }
    }
  }

  for (int i = 0; i < array.size() - 1; i++) 
    cout << array[i];
}
