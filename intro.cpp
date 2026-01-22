//bubble sort 
// #include <iostream>
// using namespace std;


// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     // Predefined array (no input)
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = 7;

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// insertion sort

// #include <iostream>
// using namespace std;

// // Insertion Sort Function
// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements greater than key to one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = 5;

//     insertionSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// selection sort

// #include <iostream>
// using namespace std;

// // Selection Sort Function
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         // Swap minimum element with first element
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = 5;

//     selectionSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// merge sort


// #include <iostream>
// using namespace std;

// // Merge two subarrays
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];

//     int i = 0, j = 0, k = left;

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j])
//             arr[k++] = L[i++];
//         else
//             arr[k++] = R[j++];
//     }

//     while (i < n1)
//         arr[k++] = L[i++];
//     while (j < n2)
//         arr[k++] = R[j++];
// }

// Merge Sort function
// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// int main() {
//     int arr[] = {38, 27, 43, 3, 9, 82, 10};
//     int n = 7;

//     mergeSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// quick sort


// #include <iostream>
// using namespace std;

// // Function to partition the array
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];   // pivot element
//     int i = low - 1;

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             // swap arr[i] and arr[j]
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }

//     // place pivot at correct position
//     int temp = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = temp;

//     return i + 1;
// }

// // Quick Sort function
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     // Predefined array (no input)
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = 6;

//     quickSort(arr, 0, n - 1);

    // cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// single linklist 

// #include <iostream>
// using namespace std;

// // Node for Singly Linked List
// struct Node {
//     int data;
//     Node* next;
    
//     Node(int val) : data(val), next(nullptr) {}
// };

// class SinglyLinkedList {
// private:
//     Node* head;
    
// public:
//     SinglyLinkedList() : head(nullptr) {}
    
//     // Insert at beginning
//     void insertAtBeginning(int val) {
//         Node* newNode = new Node(val);
//         newNode->next = head;
//         head = newNode;
    // }
    
    // // Insert at end
    // void insertAtEnd(int val) {
    //     Node* newNode = new Node(val);
    //     if (!head) {
    //         head = newNode;
    //         return;
    //     }
        
    //     Node* temp = head;
    //     while (temp->next) {
    //         temp = temp->next;
    //     }
    //     temp->next = newNode;
    // }
    
    // // Delete node
//     void deleteNode(int val) {
//         if (!head) return;
        
//         // If head needs to be deleted
//         if (head->data == val) {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }
        
//         Node* current = head;
//         while (current->next && current->next->data != val) {
//             current = current->next;
//         }
        
//         if (current->next) {
//             Node* temp = current->next;
//             current->next = current->next->next;
//             delete temp;
//         }
//     }
    
//     // Search for a value
//     bool search(int val) {
//         Node* current = head;
//         while (current) {
//             if (current->data == val) {
//                 return true;
//             }
//             current = current->next;
//         }
//         return false;
//     }
    
//     // Display the list
//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
    
//     // Get size of list
//     int size() {
//         int count = 0;
//         Node* temp = head;
//         while (temp) {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
    
//     // Reverse the list
//     void reverse() {
//         Node* prev = nullptr;
//         Node* current = head;
//         Node* next = nullptr;
        
//         while (current) {
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }
//         head = prev;
//     }
    
//     // Destructor
//     ~SinglyLinkedList() {
//         Node* current = head;
//         while (current) {
//             Node* next = current->next;
//             delete current;
//             current = next;
//         }
//     }
// };



