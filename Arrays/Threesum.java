class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
	Set<List<Integer>> set = new HashSet<>();
	Arrays.sort(nums);

	for (int i = 0; i < nums.length - 2; i++) {
		int left = i + 1, right = nums.length - 1;

		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];

			if (sum > 0)
				right--;

			else if (sum < 0)
				left++;

			else {
				set.add(List.of(nums[i], nums[left], nums[right]));
				left++;
				right--;
			}
		}
	}

	return new ArrayList<>(set);
}

}