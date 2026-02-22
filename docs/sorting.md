# Sorting Algorithms

## std::sort()

In C++ we can utilise the standard sort algorithms defined in the "algorithm" header file. the sort function acts on containers like vectors, arrays and strings (since strings are containers for characters) and sorts them in acending order. 

For example if

```
#include <algorithm>
int main() {

    int myarray[] = {22, 45, 1, 94, 53, 76, 14};

    std::sort(myarray.begin(), myarray.end());

    cout << "Sorted order: " << myarray;

    return 0;

}
```
This will print the array out in order. The same syntax applies for vectors and strings.

### Reverse Sort 

To sort in decending value we simply use the code 

```
#include <algorithm>
int main() {

    int myarray[] = {22, 45, 1, 94, 53, 76, 14};

    std::sort(myarray.rbegin(), myarray.rend());

    cout << "Sorted order: " << myarray;

    return 0;

}
```

where 'rbegin' and 'rend' represent reverse order.

### Sorting Pairs

When we use the sort() algorithm on pairs which contain a pair of two data types, the sorting will occur on the first element of the pair. For example take the following code:

```
int main() { 
    
    vector<pair<int, int>> myPair = {

        {3, 10},
        {1, 20},
        {2, 30}
    };

    sort(myPair.begin(), myPair.end());

    for(const auto& elem : myPair) {

        cout << elem.first << elem.second << '\n';
        
    }
    
    /**

    this will print out : 
    {1,20}
    {2,30}
    {3,10}

    */

    return 0;
}

If the first element is the same value, it will sort according to the second value.

```

### Complexity

time complexity: O(nlogn) <br>
space complexity: O(1)

## Bucket Sort