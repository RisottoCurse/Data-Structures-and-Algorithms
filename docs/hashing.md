# Hashing

## Sets

A set in C++ is a collection of unique elements, hence contains no duplicate values. 

A set in C++ is in sorted order meaning the values inserted will start with the smallest numerical value and increase as you move to the next index. For example if you insert {3, 5, 9, 2} into a set it will print {2, 3, 5, 9}. Therefore in C++ we have an ordered set and an unordered set.

An ordered set is implemented with a tree. 

An unordered set in implemented with a hash table and provides O(1) average lookup and insert time.