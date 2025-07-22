// #include <iostream>
// using namespace std;

// int main() 
// {
//     char end = 'D'; 

//     for(char i = 'A'; i <= end; i++) {
//         for(char j = 'A'; j <= end; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() 
{
    int start = 65; // ASCII of 'A'
    int end = 68;   // ASCII of 'D'

    for(int i = start; i <= end; i++) {
        for(int j = start; j <= end; j++) {
            cout << char(j) << " ";  // Convert ASCII to character
        }
        cout << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() 
// {
   
//     int n =4;
//     for(char i = 0; i <n; i++) {
//       char ch = 'A';
//         for(char j =0; j <n; j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }