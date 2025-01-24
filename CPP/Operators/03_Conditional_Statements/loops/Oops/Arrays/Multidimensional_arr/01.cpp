//int arr#rows[3][4]#col
#include<iostream>
using namespace std;
int main(){
    // int arr[2][3]={1,3,4,5,6,2};
    // int arr[2][3]={{1,2,3},{3,4,5}};
    // int arr[3][4];
     
// int arr[3][4];
//      for(int i = 0;i <3; i++){
//         for(int j = 0;j<4; j++){
//             cin>>arr[i][j];
//         }
//      }
//     //print
//     for(int i=0; i<3; i++)
//     {
//         for(int j = 0;j<4; j++){
//             cout << arr[i][j]<<" ";
//         }
//     cout<<endl;
// }


// find key in 2d
int arr[3][4];
bool result =false;
int key = 5;
for(int i=0; i<3; i++)
for(int j=0; j<4; j++)
{
    cin >> arr[i][j];
}
cout<<endl;
for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for(int i = 0; i<3;i++)
{
    for(int j=0; j<4; j++)
    {
        if(arr[i][j] == key){
         result = true;
         break;
    }
    else
    break;
    }

}
if(result == true)
{
    cout<<"key found";
}
else
cout<<"key not found";



//sum of all elements in 2d
//wave printing
//which row has max sum

void sumOfArray(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIndex = -1;
for(int row = 0; row <3; row++)
{
    int sum = 0;
    for(int col = 0; col <4; col++)
    {
        sum += arr[row][col];
    }
    if(sum> maximum){
        maximum = sum;
        rowIndex = row;
    }
}
cout<<"Maximum sum is: "<<maximum;
return rowIndex;
}
int main(){
    int arr[3][4] = {1,2,3,4,5,8,7,6,9,12,56,89};
}
}


//void wavePrint(int arr[][4], int row, int col){
for(int col =0; col < 4;col++)
if(col % 2 == 1){
    for(int row = r - 1; row>= 0 ; row--){
        cout << arr[row][col] << " ";
    }
}
else{
    for(int row = 0; row<3; row++){
        cout << arr[row][col] <<" ";
    }
}
}


//spiral print
