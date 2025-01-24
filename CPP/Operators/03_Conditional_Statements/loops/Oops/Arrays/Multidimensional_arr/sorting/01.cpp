//Selection Sort
/*
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }
}
int main(){
    int arr[6] = { 4,2,6,7,8,3};
    selectionSort(arr,6);
    for(int i = 0; i<6; i++){
        cout<< arr[i]<<" ";
    }
}
//time complexity
// worst case= O(n^2)
//best case = O(n^2)
*/

/*
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
for(int i =0; i< n-1; i++){
    bool hasSwapped = false;
    for(int j = 0; j< n-1; j++){
if(arr[j]> arr[j+1]){
    swap(arr[j], arr[j+1]);
    hasSwapped = true;
}
    }
    if(hasSwapped == false) break;
}
}

int main(){
int arr[6] = { 4,2,6,7,8,3};
bubbleSort(arr,6);
for(int i =0; i<6; i++){
    cout<< arr[i] <<" ";
}


}
*/
//merge two arrays
/*#include<iostream>
using namespace std;
int main(){
    int arr1[]= {1,2,3,3};
    int arr2[]= {3,4,5,5,7,9};
    int n = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
    int newArr[n];  
}*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int sum = 0;
    int arr[] = {-1,-2,6,-5,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        sum +=arr[i];
       

        if (sum > max) { 
            max = sum;
        }

        if (sum < 0) { 
            sum = 0;
        }
         
    }
    
    cout <<  max << endl;
}