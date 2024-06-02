public class Solution {
    public int[] PlusOne(int[] digits) {
        int index = digits.Length - 1;
        digits[index]++;
        if (digits[index] != 10) {
            return digits;
        }
        else {
            while (digits[index] == 10) {
                digits[index] = 0;
                if (index == 0) {
                    int[] digitsCarry = new int[digits.Length + 1];
                    digitsCarry[0] = 1;
                    for (int i = 0; i < digits.Length; i++) {
                        digitsCarry[i + 1] = digits[i];
                    }
                    return digitsCarry;
                }
                index--;
                digits[index]++;
            }
        }
        return digits;
    }
}