// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

    //    *
    //   ***
    //  *****
    // *******
    int main(){
        int num;
        cin>>num;
        for(int i = 1; i<=num;i++)
        {
            for(int j = 1; j<=num-i;j++)
            {
                cout<<" ";
            }
            for(int j = 1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        return 0;
    }



