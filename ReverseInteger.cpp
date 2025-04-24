/*
 * NAME: Reverse Integer
 *
 * DESCRIPTION:
 *     Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range , then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
 *
 *
Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21
 * 
 * Approach:

    Initialization:

    Create a variable ans and initialize it to 0. This variable will hold the reversed number.

    Processing Each Digit:

    Use a while loop to iterate as long as x is not zero. In each iteration:
        Extract the last digit of x using x % 10 and store it in the variable digit.
        Check if appending the digit to ans would cause overflow or underflow. This is done by comparing ans with INT_MAX / 10 and INT_MIN / 10.
            If ans is greater than INT_MAX / 10, multiplying it by 10 and adding any digit would exceed INT_MAX.
            Similarly, if ans is less than INT_MIN / 10, multiplying it by 10 and adding any digit would go below INT_MIN.
    If the overflow or underflow condition is detected, return 0.
    Update ans by multiplying it by 10 and adding the digit.
    Remove the last digit from x by performing integer division x / 10.

    Return Result:

    After the loop ends, ans contains the reversed integer, and it is returned as the result.
 *   
 *
 * */



class Solution {
public:
    int reverse(int x) {
        int reversedInteger = 0;
        while (x != 0) {
            int digit = x % 10;

            if ((reversedInteger > INT_MAX /10) || (reversedInteger < INT_MIN / 10)) {
                return 0;
            }
             reversedInteger = reversedInteger * 10 + digit;
             x = x / 10; 

        }
        return reversedInteger;
    }
};
