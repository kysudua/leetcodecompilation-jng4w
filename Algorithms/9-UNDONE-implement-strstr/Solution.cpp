#include "../resources/main.h"


//This algorithm cannot back to original FIRST SAME CHAR position
//----------------------------------------------------------------
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int i=0;
//         int j=0;
//         int pos=-1;
//         
//         //traverse haystack to get FIRST SAME CHAR
//         while(true){
//             if(haystack[i]==needle[0]){
//                 pos=i;
//                 break;
//             }
//             if(++i==haystack.length()) return -1;
//         }
//         cout << pos<< "\n";
//         
//         //traverse needle and haystack to compare
//         while(pos!=-1) {
//             cout << "t ";
//             if(j==needle.length()) break;
//             if(i==haystack.length()) return -1;
//             if(haystack[i++]!=needle[j++]) return -1;
//         }     
//         return pos;
//     }
// };



 