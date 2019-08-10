public class BinarySearch {
 
    public static void main(String[] args) {
 
        int[] a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        System.out.println(binarySearchIterative(a, 8));
        System.out.println(binarySearchRecursive(a, 0, a.length - 1, 8));
 
    }
 
    public static int binarySearchIterative(int[] a, int key) {
 
        int lo = 0;
        int hi = a.length - 1;
 
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (key < a[mid]) {
                hi = mid - 1;
            } else if (key > a[mid]) {
                lo = mid + 1;
            } else {
                return mid;
            }
        }
 
        return -1;
    }
 
    private static int binarySearchRecursive(int[] a, int lo, int hi, int key) {
 
        if (hi < lo) {
            return -1;
        }
 
        int mid = (lo + hi) / 2;
 
        if (key == a[mid]) {
            return mid;
        } else if (key < a[mid]) {
            return binarySearchRecursive(a, lo, mid - 1, key);
        } else {
            return binarySearchRecursive(a, mid + 1, hi, key);
        }
 
    }
 
}