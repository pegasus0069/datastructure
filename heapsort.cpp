#include <iostream>   
using namespace std; 

void heapify(char arr[], int n, int i) { 
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2; 
  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  	
	if (r < n && arr[r] > arr[largest]) 
        largest = r; 

    if (largest != i) { 
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
} 
  
void heapSort(char arr[], int n) { 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
        
    for (int i=n-1; i>=0; i--) { 
        swap(arr[0], arr[i]);   
        heapify(arr, i, 0); 
    } 
} 
  
void printArray(char arr[], int n) { 
    for (int i=0; i<n; ++i)
    cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main() { 
    char arr[] = {'l', 'b', 'z', 'g', 'e', 'f', 'd', 'h', 'i', 'j', 'w', 'a', 'v', 'y', 'x', 'p', 'q', 'r', 's', 't', 'u', 'm', 'k', 'o', 'n', 'c'}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Heap Sort\n";
    printArray(arr,n); 
    heapSort(arr, n); 
    cout << "After Heap Sorted\n"; 
    printArray(arr, n); 
}
