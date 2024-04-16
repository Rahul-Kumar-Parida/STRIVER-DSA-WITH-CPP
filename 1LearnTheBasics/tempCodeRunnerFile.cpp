int reverse(int n)
// {
//     int rev = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     return rev;
// }

// // 3)check palendrome
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