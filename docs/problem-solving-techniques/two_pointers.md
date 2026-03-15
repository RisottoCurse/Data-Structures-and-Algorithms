# Two Pointers

## Definition

Two pointers is a technique that can be used on linear data structures such as arrays, strings and linked lists. It is useful as it can significantly improve time complexity from $O(n^2)$ and $O(nlog(n))$ to $O(n)$. 

In two pointers we inititials two variables that can either move towards each other, away from each other or move in the same direction depending on the problem. Since they represent indices we can use them to compare data types that would otherwise be done using a nested loop.

There exist different types of two pointer techniques which will be explores in more detail below.


## Converging Pointers

The pointers will start at both ends of a container and move towards each other. 
```
vector<int> twoSum(vector<int>& numbers, int target) {

    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum < target) {
            left++;
        }
        else if (sum > target) {
            right--;
        }
        else {
            return {left, right}
        }
    }

    return{};
}
```
## Paraller Pointers

They will start at the same end, usually the beginning, and move in the same direction. Sliding window technique is a popular variation of this approach.
## Trigger Based Pointers

In this approach the pointers start at the same end and the right will move forward until a trigger/ value is reached that will make the left pointer love forward.

## When to use?

It is important to identify problems where two pointers 
