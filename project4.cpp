#include <iostream>
using namespace std;
void rotateRight(int arr[], int start, int end) {
    if (end - start < 2) return;  
    int last = arr[end - 1];
    for (int i = end - 1; i > start; i--)
        arr[i] = arr[i - 1];
    arr[start] = last;
}
void rotateHalves(int arr[], int size) {
    int mid = size / 2;
    rotateRight(arr, 0, mid);       
    rotateRight(arr, mid, size);         
}
int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    rotateHalves(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";       
    cout << endl;
    return 0;
}