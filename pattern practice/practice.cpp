#include <iostream>
using namespace std;
int main()
{

    // Find Positive or Negative
    /*
    Example:
    Input: 5
    Output: Positive number
    
    Input: -3
    Output: Negative number
    */

    // int num;
    // cout << "Enter The Number: ";
    // cin >> num;
    // if (num > 0)
    // {
    //     cout << "Positive number";
    // }
    // else
    // {
    //     cout << "Negative number";
    // }

    // Find Even or Odd
    /*
    Example:
    Input: 4
    Output: Even Number
    
    Input: 7
    Output: Odd Number
    */

    // int num;
    // cout << "Enter the Number: ";
    // cin >> num;
    // if (num % 2 == 0)
    // {
    //     cout << "Even Number";
    // }
    // else
    // {
    //     cout << "Odd Number";
    // }

    // Print all even numbers
    /*
    Example:
    Input: 10
    Output: 2 4 6 8 10
    */

    // int n;
    // cout << "Enter the Number: ";
    // cin >> n;

    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     cout << i << " ";
    // }

    // Print all alphabets
    /*
    Output:
    a b c d ... z
    */

    // for (char name = 'a'; name <= 'z'; name = name + 1)
    // {
    //     cout << name << " ";
    // }

    // Reverse Print
    /*
    Example:
    Input: 5
    Output: 5 4 3 2 1
    */

    // int n;
    // cout << "Enter the Number: ";
    // cin >> n;

    // for (int i = n; i > 0; i--)
    // {
    //     cout << i << " ";
    // }

    // Print A^B
    /*
    Example:
    Input: a = 2, b = 3
    Output: 8
    */

    // int a;
    // int b;
    // int num = 1;
    // cout << "Enter the Number a: ";
    // cin >> a;
    // cout << "Enter the Number b: ";
    // cin >> b;
    // for (int i = 1; i <= b; i++)
    // {
    //     num = a * num;
    // }
    // cout << num;

    // Sum of squares up to n^2
    /*
    Example:
    Input: n = 3
    Output: 14 (1^2 + 2^2 + 3^2)
    */

    // int sum = 0;
    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     int mul;
    //     mul = i * i;
    //     sum += mul;
    // }
    // cout << sum;

    // Factorial of n
    /*
    Example:
    Input: n = 5
    Output: 120
    */

    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << fact;

    // Find Prime number
    /*
    Example:
    Input: 7
    Output: Prime Number
    
    Input: 4
    Output: Not a Prime Number
    */

    // int n;
    // cout << "Enter The Number: ";
    // cin >> n;
    // if (n < 2)
    // {
    //     cout << "Not a prime number";
    // }
    // else
    // {
    //     for (int i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             cout << "Not a Prime number";
    //             return 0;
    //         }
    //     }
    //     cout << "Prime Number";
    // }

    // Fibonacci series
    /*
    Example:
    Input: n = 5
    Output: 1 1 2 3 5
    */

    int curr = 1;
    int prev = 1;
    int last = 0;
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        curr = prev + last;
        last = prev;
        prev = curr;
        cout << curr << " ";
    }
}
