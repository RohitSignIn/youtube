#include<iostream>
using namespace std;
int main(){

// Pattern 1
// *
// **
// ***
// ****

// for(int i=1; i<=4; i++){ 

//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 2
// ****
// ***
// **
// *

// for(int i=4; i>0; i--){ 
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 3
//    *
//   **
//  ***
// **** 

// for(int i=1; i<=4; i++){ //Main
//     // For Spaces
//     for(int j=1; j<=4-i; j++){
//         cout<<" ";
//     }
//     //For Stars
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// Pattern 4
// **** 
//  ***
//   **
//    *

// for(int i=4; i>0; i--){ //Main
//     // For Spaces
//     for(int j=1; j<=4-i; j++){
//         cout<<" ";
//     }
//     //For Stars
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 5
//    *
//   ***
//  *****
// *******

// for(int i=1; i<=4; i++){ //Main
//     // For Spaces
//     for(int j=1; j<=4-i; j++){
//         cout<<" ";
//     }
//     //For Stars
//     for(int j=1; j<=(i+i)-1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Pattern 6
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// UpperHalf
for(int i=1; i<=20; i++){ //Main
    // For Spaces
    for(int j=1; j<=20-i; j++){
        cout<<" ";
    }
    //For Stars
    for(int j=1; j<=(i+i)-1; j++){
        cout<<"*";
    }
    cout<<endl;
}
// LowerHalf
for(int i=20; i>0; i--){ //Main
    // For Spaces
    for(int j=1; j<=20-i; j++){
        cout<<" ";
    }
    //For Stars
    for(int j=1; j<=(i+i)-1; j++){
        cout<<"*";
    }
    cout<<endl;
}


  return 0;
}