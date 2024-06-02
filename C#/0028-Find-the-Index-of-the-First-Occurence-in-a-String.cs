public class Solution {
    public int StrStr(string haystack, string needle) {
        int firstIndex = -1;
        if (needle.Length > haystack.Length) {
            return firstIndex;
        }
        for (int i = 0; i < haystack.Length; i++) {
            if (firstIndex != -1) {
                return firstIndex;
            }
            if (haystack[i] == needle[0]) {
                firstIndex = i;
                if (haystack.Length - i < needle.Length) {
                    return -1;
                }
                for (int j = 0; j < needle.Length; j++) {
                    if (needle[j] != haystack[firstIndex + j]) {
                        firstIndex = -1;
                    }
                }
            }
        }
        return firstIndex;
    }
}