class Solution {
     void reverse(int[] a, int start, int end) {
        while (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;

            start++;
            end--;
        }
    }
    public void rotate(int[] nums, int k) {

        k = k % nums.length;
         reverse(nums, 0, nums.length - 1);
        // Step 1: Reverse first d elements
        reverse(nums, 0, k - 1);

        // Step 2: Reverse remaining elements
        reverse(nums, k, nums.length - 1);

        // Step 3: Reverse entire array
       



        
    }
}