class Solution {
public:
    string addBinary(string a, string b) {
        char c = '0';
        int carry = 0;
        int sum = 0;
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;
        string res = "";
        while (n1 >= 0 || n2 >= 0 || carry > 0) {
            int x = (n1 >= 0 ? a[n1] - '0' : 0) + (n2 >= 0 ? b[n2] - '0' : 0) + carry;
            sum = x % 2;  // Calculate sum
            carry = x / 2;  // Calculate carry
            res = char(sum + '0') + res;  // Convert sum to character and append to result
            n1--;
            n2--;
        }
        return res;
    }
};
