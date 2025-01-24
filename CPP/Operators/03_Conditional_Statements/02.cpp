#include<iostream>
using namespace std;
int main()
 {
//     int i = 1;
//     while(i <= 5){
//         cout<< i<< " ";
//         i++;
//     }

//------------do while------------
//------------break-----------
// for(int i = 0; i<10; i++)
// {
//     if (i == 5) break;
//     cout << i <<" "; 
// }
// for(int i = 0; i<10; i++)
// {
//     cout << i << " ";
// }

// -------------continue-----------
// for(int i = 0; i<10; i++)
// {
//     if (i == 5) continue;
//     cout << i <<" "; 
// }
// for(int i = 0; i<10; i++)
// {
//     cout << i << " ";
// }
// int num;
// int sum = 0;
// for (int i= 1;i<=3;i++)
// {
//     for(int j = 1; j <=3; j++)
//     {
//         if(j == 2)
//         {
//             continue;
//         }
//         cout<<"i = "<< i <<" , j "<< j <<endl; 
//     }
// }


// ---------------Nested loops------------
for(int i = 0;i<=3;i++)
{
    for(int j = 0; j<=3;j++)
    {
        if(j==2)
        {
            continue;
        }
        cout<<"i = "<< i <<" , j "<<j << endl;


        
    }
}
}