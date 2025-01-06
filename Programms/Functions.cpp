#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// char Converter(char name)
// {
//     char ans = char(name - 'a' + 'A');
//     return ans;
// }

int count_digit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit) {
    int ans = 0;
    int rem;
    int n = num;   // 153

    while (n) {
        rem = n % 10;  // Get last digit
        n /= 10;        // Remove last digit
        ans += int(pow(rem, digit));  // Add rem^digit to ans
    }

    // Compare if the calculated sum equals the original number
    return ans == num;  // Return true if it's an Armstrong number, else false
}


int main() {
    int num;
    cout << "Enter the digit : ";
    cin >> num;

    int digits = count_digit(num);
    cout << "Number of digits: " << digits << endl;

    if (Armstrong(num, digits)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}