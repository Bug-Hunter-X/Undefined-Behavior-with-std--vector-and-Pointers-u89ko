# C++ Vector and Pointer Undefined Behavior
This repository demonstrates a common C++ error:  modifying a `std::vector` after taking a pointer to its elements.  The `push_back` operation might reallocate the vector's internal memory, causing the pointer to become invalid.  Accessing the memory pointed to by the invalid pointer leads to undefined behavior.

The `bug.cpp` file contains the buggy code. The `bugSolution.cpp` file provides a corrected version.