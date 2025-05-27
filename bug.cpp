std::vector<int> vec = {1, 2, 3};
int* ptr = &vec[0];
vec.push_back(4); // Bug: This might invalidate ptr
*ptr = 10; // Undefined behavior if vec reallocated