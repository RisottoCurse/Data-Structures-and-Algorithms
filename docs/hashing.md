# Hashing

## std::set

A set in C++ is a collection of unique elements, hence contains no duplicate values. 

A set in C++ is in sorted order meaning the values inserted will start with the smallest numerical value and increase as you move to the next index. For example if you insert {3, 5, 9, 2} into a set it will print {2, 3, 5, 9}. Therefore in C++ we have an ordered set and an unordered set.

An ordered set is implemented with a tree. <br>

An unordered set in implemented with a hash table and provides O(1) average lookup and insert time.


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