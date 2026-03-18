# Stack

## Definition

A std::stack iclass is a container adaptor that gives the user the functionality of a stack. It is a data structure that follows **LIFO** (Last In First Out). All member functions of stack are constexpr.

Stack is implemented by 

```
#include <stack>

int main() {

    std::stack<T> stackName;

    return 0;
}
```

## Useful Methods

1. Push

The push method will insert a variable into the stack. It therefore requires a parametre of the value to be inserted and returns nothing hence is void.

```
void push(int val) {
    stackName.push(val);
}
```

2. Pop

Pop will remove the last value inserted into the stack as it follows LIFO. 

```
void pop() {
    stackName.pop();
}
```

3. Top

Using top will retrieve the top element from the stack.

```
int top() {
    return stackName.top();
}
```


