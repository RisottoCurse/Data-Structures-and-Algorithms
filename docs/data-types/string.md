# String

## Definition

Strings in C++ are objects that represent sequences of characters.

## Useful Methods

1. size() / length()

Returns the length of a string in bytes. 

```
int main () {
  std::string str ("Test string");
  std::cout << "The size of str is " << str.size() << " bytes.\n";
  return 0;
}
```

answer is 11 bytes.

2. rbegin()

Returns a reverse iterator pointing to the last character of the string. 


```
int main () {
  std::string str ("now step live...");
  for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    std::cout << *rit;
  return 0;
}
```

if you want to store the output: 
```
    string sinv;

    for (rit = s.rbegin(); rit!= s.rend(); rit++) {
         sinv += *rit 
    }
```

Another way to reverse a string is to use the "reverse()"

```
string sinv = s;
reverse(sinv.begin(), sinv.end())
```

3. isalnum()

Checks is the string contains alphanumeric characters.

4. tolower

Converts text to lower case. 