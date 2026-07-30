#include <iostream>

using namespace std;

int main() {
    int size, max, i, least,s;

    // Prompt user for array size
    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate input size
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    // Allocate memory dynamically
    int* arr = new int[size];

    // Get array elements from user
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the entered array
    cout << "\nYou entered the following array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    max = arr[0];
    for(int i=0; i<size; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
     cout<<"\nTHE LARGEST NUMBER IS:"<<max<<endl;
     
     least= arr[0];
     for(i=0; i<size; i++){
         if (arr[i]< least){
             least=arr[i];
         }
     }
     cout<<"\nTHE SMALLEST NUMBER IS:"<<least<<endl;
     
     cout<<"enter second size of array"<<endl;
     cin>>s;
            
    if(s<=0){
        cout<<"invalid size"<<endl;
        return 1;
        }
        
        int* ar = new int[s];
        
        cout<<"Enter "<<s<<" integers"<<endl;
        for(i=0; i<s; i++){
            cout<<"Element "<<i+1<<":";
            cin>>ar[i];
        }
        cout<<"the second array is:"<<endl;
        for(i=0; i<s; i++){
          cout<<ar[i]<<" ";
           //" " makes space between elements
        }
            // Create an array of pointers to hold the existing arrays
    int* matrix[2]; 

    // Point them directly to your existing arrays (Zero copying required!)
    matrix[0] = arr; 
    matrix[1] = ar;  

    // Display as 2D array
    cout << "\n\n2D Array:\n";
    for(int i = 0; i < size; i++) {
        cout << matrix[0][i] << " ";
    }
    cout << endl;

    for(int i = 0; i < s; i++) {
        cout << matrix[1][i] << " ";
    }
    cout << endl;

    // Free memory (Much simpler cleanup!)
    delete[] arr;
    delete[] ar;
 return 0;
}
