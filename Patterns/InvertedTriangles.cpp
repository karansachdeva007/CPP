// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
  
//     for (int i = 0; i < n; i++) { 
//         for (int j = 0; j < i; j++) { 
//             cout<< " ";
    
//         }
//                 for(int j = 0; j <n-i; j++){
//             cout << (i+1);
                
//             }

//         cout << endl; 
//     }

// }



// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//   char ch ='A';
//     for (int i = 0; i < n; i++) { 
//         for (int j = 0; j < i; j++) { 
//             cout<< " ";
    
//         }
//                 for(int j = 0; j <n-i; j++){
//             cout << ch ;
//               ch++;                
//             }

//         cout << endl; 
//     }

// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
  char ch ='A';
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < i; j++) { 
            cout<< " ";
    
        }
                for(int j = 0; j <n-i; j++){
            cout << ch ;
            }

        cout << endl; 
              ch++;                
    }

}