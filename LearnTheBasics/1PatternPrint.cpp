#include <iostream>
using namespace std;
// PATTERN QUESTION.........................................
//  int main(){
// 1........................
/*
1 2 3
4 5 6
7 8 9
*/
// int i=1;
// int count=1;
// while (i<=3)
// {
//     int j=1;
//     while (j<=3)
//     {
//         cout<< count <<" ";
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// }
// 2..........................................
/*
1
22
333
4444
*/
// int n=4;
// int i=1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<< i;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// }
// 3..............................................
/*
1
2 3
4 5 6
7 8 9 10
*/
// int n=4;
// int i=1;
// int count =1;
// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout<< count <<" ";
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// }
// 4........................................
/*
A A A A
B B B B
C C C C
D D D D
*/
//     int n=4;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         char ch = 'A'+i-1;
//         while (j<=n)
//         {
//             cout<< ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// 5................................................
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
*/
//     int n=6;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<< i-j+1 <<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// 6............................................
/*
1
2 3
3 4 5
4 5 6 7
*/
//     int n=4;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         int value = i;
//         while (j<=i)
//         {
//             cout<< value <<" ";
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 1..........................................
/*
1
21
321
4321
54321
*/
// int main(){
//     int n=5;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<< (i-j+1)<< " ";
//             j++;
//         }
//         cout<< endl;
//     i++;
//     }

// }

// 2............................................
/*
A B C
D E F
G H I
*/
// int main()
// {
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char value = 'A'+ n*i-3;
//         while (j <= n)
//         {
//             cout << value << " ";
//             value++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 3................................................
/*
A B C
B C D
C D E
*/
// int main()
// {
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A'+i-1;
//         while (j <= n)
//         {
//             cout << ch << " ";
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 4......................................
/*
A
BB
CCC
DDDD
*/
// int main()
// {
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char value = 'A'+i-1;
//         while (j <= i)
//         {
//             cout << value << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// 5........................................pending
/*
A
BC
DEF
GHIJ
*/

// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char value='A'+i-1;
//         while (j <= i)
//         {
//             cout <<value << " ";
//             value=value+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 6.............................................
/*
A
BC
CDE
DEFG
EFGHI
*/
// int main()
// {
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char value='A'+i-1;
//         while (j <= i)
//         {
//             cout <<value << " ";
//             value=value+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 7....................................
/*
D
CD
BCD
ABCD
*/
// int main(){
//     int n = 4;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char value='A'+n-i;
//         while (j <= i)
//         {
//             cout <<value << " ";
//             value=value+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 8............................................
// spaces and star
/*
 *
 **
 ***
 ****
 *****
 */

// int main(){
//     int n = 4;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n-i;
//         while (space)
//         {
//             cout <<" " ;
//             space--;
//         }
//         int col =1;
//         while (col<=i)
//         {
//             cout<<"*";
//             col++;
//         }

//         cout << endl;
//         i++;
//     }
// }

// 9............................
/*
*****
****
***
**
*
*/
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//         int col =1;
//         int star=n-i+1;
//         while (col<=star)
//         {
//             cout<<"*";
//             col++;
//         }

//         cout << endl;
//         i++;
//     }
// }

// 10..............................................
/*
*****
****
***
**
*
*/
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//          int space=i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         int star=n-i+1;
//         while (col<=star)
//         {
//             cout<<"*";
//             col++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// 11...........................................
/*
1111
 222
  33
   4
*/
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//          int space=i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         int star=n-i+1;
//         int value= 1+i-1;
//         while (col<=star)
//         {
//             cout<<value;
//             col++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// 12...............................................
/*
    1
   22
  333
 4444
55555
*/
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//          int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         int value = 1+i-1;
//         while (col<=i)
//         {
//             cout<<value;
//             col++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// 13.........................................pending
/*
      1
    2 3
  4 5 6
7 8 9 10
*/
// int main(){
//     int n = 5;
//     int i = 1;
//     while (i <= n)
//     {
//          int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         int value= 2*i-col;
//         while (col<=i)
//         {
//             cout<<value;
//             value++;
//             col++;
//         }
//         cout << endl;
//         i++;
//     }
// }
// 14.............................................
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
// int main(){
//     int n = 4;
//     int i = 1;
//     while (i <= n)
//     {
//          int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col =1;
//         int value =col;
//         while (col<=i)
//         {
//             cout<<value;
//             value++;
//             col++;
//         }
//         int v2=i-1;
//         while (v2)
//         {
//             cout<<v2;
//             v2--;
//         }

//         cout << endl;
//         i++;
//     }
// }