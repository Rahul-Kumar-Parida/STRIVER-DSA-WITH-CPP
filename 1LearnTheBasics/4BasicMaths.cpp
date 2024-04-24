#include <iostream>
#include <math.h>
using namespace std;

// 1) 🍀Count The Digit
// int main()
// {
//     int n;
//     int count = 0;
//     cout << "Enter Your Number:";
//     cin >> n;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     cout << "The Digit of N numbers is: " << count << endl;
//     return 0;
// }

// int main()
// {
//     string n;
//     cout << "Enter Your Number:";
//     cin >> n;

//     cout << "The Digit of N numbers is: " << n.length() << endl;
//     return 0;
// }

// 2)🍀reverse a numbers
// int reverse(int n)
// {
//     int rev = 0;4
//     while (n != 0)
//     {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     return rev;
// }

// // 3)🍀check palendrome
// int main()
// {
//     int n;
//     cout << "Enter Your Number: ";
//     cin >> n;
//     int res = reverse(n);
//     // cout << "The Reverse of number is: " <<res<< endl;
//     if (res == n)
//     {
//         cout << "Number Is Palendrome" << endl;
//     }
//     else
//     {
//         cout << "Number Is Not Palendrome" << endl;
//     }

//     return 0;
// }

// 4)🍀GCD or HCF
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
// // m-1.....
// int main()
// {
//     int num1, num2;
//     cout << "number 1 : " << endl;
//     cin >> num1;
//     cout << "number 2 : " << endl;
//     cin >> num2;
//     cout << "The Gcd of two number is: " << gcd(num1, num2) << endl;
//     return 0;
// }
// m-2......
//  int main()
//  {
//      int ans = 0;
//  int num1, num2;
//  cout << "number 1 : " << endl;
//  cin >> num1;
//  cout << "number 2 : " << endl;
//  cin >> num2;

//     for (int i = 1; i <= min(num1, num2); i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             ans = i;
//         }
//     }
//     cout << "The GCD of given Number Is: " << ans << endl;
//     return 0;
// }

// 5)🍀Armstrong Numbers...

// bool ArmstrongNumber(int n)
// {
//     if (n < 0)
//         return false; // Armstrong numbers are defined only for non-negative integers

//     int original = n;
//     int count = 0;
//     int temp = n;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     int sumOfPower = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         int power = 1;
//         for (int i = 0; i < count; ++i)
//         {
//             power *= digit;
//         }
//         sumOfPower += power;
//         n /= 10;
//     }

//     return (sumOfPower == original);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (ArmstrongNumber(n))
//     {
//         cout << "IT is a ArmSrong Number" << endl;
//     }
//     else
//     {
//         cout << "No,It is Not an armstrong Number" << endl;
//     }

//     return 0;
// }

// 6)🍀Print All Divisiors........
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// 7)🍀check prime;
//m-1..,,
// int main()
// {
//     int n;
//     cin >> n;
//     bool res = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             res = 0;
//         }
//     }
//     if (res && n != 1)
//     {
//         cout << "prime" << endl;
//     }
//     else
//     {
//         cout << "not prime" << endl;
//     }
//     return 0;
// }

// m-2..,,
bool isPrime(int N)
{
    for (int i = 2; i < sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n = 10;

    bool ans = isPrime(n);
    if (n != 1 && ans == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }
    return 0;
}