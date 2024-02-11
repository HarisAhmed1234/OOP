#include <iostream>

using namespace std;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* result = new int[2];
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return nullptr;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int returnSize;
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    for (int i = 0; i < returnSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;

    return 0;
}
