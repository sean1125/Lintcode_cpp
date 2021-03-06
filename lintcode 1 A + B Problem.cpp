class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.

        int sum, carry;

        while (b != 0) {
            sum = a ^ b;
            carry = a & b;
            a = sum;
            b = carry << 1;
        }

        return a;
    }
};
