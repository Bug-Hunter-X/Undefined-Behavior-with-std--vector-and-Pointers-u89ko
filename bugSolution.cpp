std::vector<int> vec = {1, 2, 3};
std::vector<int>::iterator iter = vec.begin(); // Or use vec.data() for C++17 and later
*iter = 10; // Modifying using iterator is safe
vec.push_back(4); // Safe to push_back after using iterators