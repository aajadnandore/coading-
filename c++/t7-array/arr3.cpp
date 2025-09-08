#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 3, 0, 10, 2, 5, 6};
     for(int i = 0; i < 7; i++) {
         if(i % 2 == 0) {
             arr[i] = arr[i] * 2; // Double the value at even indices
         } else {
             arr[i] = arr[i] + 10; // Halve the value at odd indices
         }}
         for(int i = 0; i < 7; i++) {
             cout << arr[i] << " "; // Print the modified array
         }
    return 0;
}