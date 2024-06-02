public class Solution {
    public int LengthOfLastWord(string s) {
        int index;
        int counter = 0;
        for (int i = s.Length - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                index = i;
                while (s[index] != ' ' && index != 0) {
                    counter++;
                    index--;
                }
                if (s[index] != ' ') {
                    counter++;
                }
                return counter;
            }
        }
        return counter;
    }
}