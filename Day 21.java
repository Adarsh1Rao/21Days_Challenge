import java.util.*;

public class Solution {
    public static boolean checkDiff(int[] arr, int N, int K) {
        HashSet<Integer> set = new HashSet<>();

        for (int ele : arr) {
            if (set.contains(ele - K) || set.contains(ele + K)) {
                return true;
            }
            set.add(ele);
        }
        return false;
    }
}

