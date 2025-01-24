#include<iostream>
using namespace std;
#include<climits>
/*int main()
//linear data str one after another
//can store multiple value of same datatype

{
//int arr1[5];
//arr initialization
//size of array is n last index will be n-1;
int arr[5] = {7,4,8,2,5};
arr[4]=6;
cout<<arr[4]<<endl;
for(int i = 0; i<5;i++)
{
    cout << arr[i]<<" ";
}
cout << endl;
//or
for(int i:arr){
    cout<<i<<" ";
}
}

int main(){
int arr1[5];
for(int i =0; i<5;i++)
{
    cin>> arr1[i];
}
cout<<endl;
for(int i = 0; i<5;i++)
{
    cout<<arr1[i]<<" ";
}
}


int main(){
    int arr1[5];
for(int i =0; i<5;i++)
{
    cin>> arr1[i];
}
cout<<endl;
for(int i = 0; i<5;i++)
{
    cout<<arr1[i]<<" ";
}
cout <<endl;
    int max = INT_MIN;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        cout<<max;
    }


    //or

    int getMaxElement(int arr[],int size)
    {
        int max = INT_MIN;
        for(int i =0;i<size;i++)
        {
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
    int main(){
    int arr[6]={3,5,2,7,8,1};
    int size = 6;
    getMaxElement(arr,size);
}



bool linearSearch(int arr[],int key){

}
*/
// reversing a arry
int main(){
    int arr[5];
    int s=0;
    int e = 4;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout <<endl;
    for (int i = 0; i<5; i++)
    {
        cout<<arr[i];
    }
    cout<< endl;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
    for (int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
cout << endl;
}

//Binary search
//if we want to apply binary search it should be sorted first 
