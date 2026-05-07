# Hashing

## std::set

A set in C++ is a collection of unique elements, hence contains no duplicate values. 

A set in C++ is in sorted order meaning the values inserted will start with the smallest numerical value and increase as you move to the next index. For example if you insert {3, 5, 9, 2} into a set it will print {2, 3, 5, 9}. Therefore in C++ we have an ordered set and an unordered set.

An ordered set is implemented with a tree. <br>

An unordered set in implemented with a hash table and provides O(1) average lookup and insert time.

### Useful methods 

1. Count

Count searches the container for elements and returns number of matches. Because all elements in a set are unique the function will return 1 if element is found or 0 if it is not.

2. Find

iterator find (const auto& val);

Searches the container for an element equivalent to 'val' and returns an iterator to it if found. If element is not found, it returns an iterator to set::end.

e.g. 
```
if (set.find(1) == set.end()) {
    cout << "1 is not in set";
}
```
3. End

iterator end(); 
const_iterator end() const;

Returns an iterator to the past-the-end element in the set container.

4. Begin

As we know a set orders data in ascending order but how do we retrieve the value? 

we can use the begin() method but this returns an iterator so to access the element we have to dereference it. 

```
set<int> temp = {'3', '1', '9', '5'};

auto firstElement = temp.begin()

return *firstElement;

```


## std::map 

A map in c++ is a data structure that stores a key and value. In the map data structure the key is automatically orderded. 

Let's look at an example on how to use the map.

```
int main() {

    // Method 1 of inserting data into map
    
    map<dataTypeKey, dataTypeValue> mapName;
    
    mapName["Key1"] = Value1;
    mapName["Key2"] = Value2;
    mapName["Key3"] = Value3;

    // Method 2 of inserting data into map

    map<dataTypeKey, dataTypeValue> mapName = {
        {Key1, Value1},
        {Key2, Value2},
        {Key3, Value3},
    };

    // to print out map we have to iterate through it

    for (const auto& elem : mapName) {

        cout << elem.first() << " : "<< elem.second() << endl;
    }
}

```
When we print out the first (key) and second (value) compoment of elem, because we are using map the output is sorted according to the value of the key.

## std::unordered_map

A unordered map in c++ stores key values similar to std::map but without sorting the key.

the syntax is 

```
unordered::map<dataTypeKey, dataTypeValue> ump;

ump[key] = value;
```

Any experience with c++ informs us that using const in an unordered map results in being unable to modify/insert data into the map. 
This is why using the '[]' operator is not possible in when the map is const'ed. As an alternate if searching for data is to use .at(key) to search otherwise the map should not be a constant.