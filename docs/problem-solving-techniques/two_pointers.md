# Two Pointers

## Definition

Two pointers is a technique that can be used on linear data structures such as arrays, strings and linked lists. It is useful as it can significantly improve time complexity from $O(n^2)$ and $O(nlog(n))$ to $O(n)$. 

In two pointers we inititials two variables that can either move towards each other, away from each other or move in the same direction depending on the problem. Since they represent indices we can use them to compare data types that would otherwise be done using a nested loop.

There exist different types of two pointer techniques which will be explores in more detail below.

The core idea is to define the lefrt and right pointers as indices and not as representing the value in the container data structure.


## Converging Pointers

The pointers will start at both ends of a container and move towards each other. 
```
vector<int> twoSum(vector<int>& numbers, int target) {

    int l = 0;
    int r = numbers.size() - 1;

    while (l < r) {
        int sum = numbers[l] + numbers[r];

        if (sum < target) {
            l++;
        }
        else if (sum > target) {
            r--;
        }
        else {
            return {l, r}
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

It is important to identify problems where two pointers as it will help solve problems more efficiently and in some cases make it easier than brute force.

Key patterns include: <br>
1. Working with sorted array
2. When looking for a pair or combination
3. When problem involves a range or window
4. When reducing problem from $O(n^2)$ to $O(n)$

The last one is huge. If you find yourself using a nested for loop you can probably increase efficiency with two pointers. 