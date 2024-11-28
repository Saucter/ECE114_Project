#ifndef QUESTIONTIERS_H
#define QUESTIONTIERS_H

#include <vector>
#include "Question.h"

// Tier 1 Questions
std::vector<Question> tier1Questions = {
    {"What is the value of *ptr after the following code executes?\n int x = 10;\n int *ptr = &x;\n *ptr = 20;\n", "B", "A) 10\n B) 20\n C) Address of x\n D) Undefined"},
    {"What will the following code print?\n int x = 5;\n int y = 10;\n int* ptr = &x;\n ptr = &y;\n std::cout << *ptr << std::endl;\n", "B", "A) 5\n B) 10\n C) Address of y\n D) Compilation error"},
    {"Which operator is used to access the value pointed to by a pointer?\n", "B", "A) &\n B) *\n C) ->\n D) ."},
    {"What does the nullptr keyword represent in C++?\n", "B", "A) A null character\n B) A null pointer\n C) A function to reset pointers\n D) Undefined behavior"},
    {"What will the following code output?\n int x = 5;\n int y = 3;\n int z = x % y;\n std::cout << z << std::endl;\n", "B", "A) 1\n B) 2\n C) 3\n D) Compilation error"},
    {"What is the value of result after the following code executes?\n int x = 2;\n int y = 3;\n int result = x * y + y / x;\n", "C", "A) 6\n B) 7\n C) 8\n D) Compilation error"},
    {"What is the output of the following code?\n int x = 5;\n if (x > 3 ? x < 6 : x > 10) {\n std::cout << \"True\" << std::endl;\n } else {\n std::cout << \"False\" << std::endl;\n }\n", "A", "A) True\n B) False\n C) Compilation error\n D) Undefined behavior"},
    {"Which direction is the assignment operator = evaluated?\n", "B", "A) Left to right\n B) Right to left\n C) Top to bottom\n D) None of the above"},
    {"What will the following code print?\n int arr[3] = {1, 2, 3};\n int* ptr = arr;\n std::cout << *(ptr + 1) << std::endl;\n", "B", "A) 1\n B) 2\n C) 3\n D) Compilation error"},
    {"What is the correct way to allocate memory for an integer dynamically in C++?\n", "B", "A) int* ptr = malloc();\n B) int* ptr = new int;\n C) int* ptr = allocate();\n D) int ptr = new int;"},
    {"What will the following code output?\n int x = 10;\n int* ptr = &x;\n std::cout << *ptr << std::endl;\n", "C", "A) 0\n B) Address of x\n C) 10\n D) Compilation error"},
    {"What is the correct way to declare a pointer to an integer?\n", "B", "A) int ptr;\n B) int* ptr;\n C) int ptr;\n D) ptr int;"},
    {"What will the following code print?\n int arr[5] = {10, 20, 30, 40, 50};\n int* ptr = arr;\n std::cout << *(ptr + 2) << std::endl;\n", "C", "A) 10\n B) 20\n C) 30\n D) Compilation error"},
    {"Which operator is used to get the memory address of a variable?\n", "A", "A) &\n B) *\n C) ->\n D) ++"},
    {"What does the following code do?\n int x = 5;\n int* ptr = &x;\n *ptr = 15;\n", "A", "A) Changes x to 15\n B) Sets ptr's address to 15\n C) Compilation error\n D) Nothing"},
    {"What will the following code output?\n int x = 3;\n int y = 4;\n std::cout << (x > y ? x : y) << std::endl;\n", "B", "A) 3\n B) 4\n C) Compilation error\n D) Undefined behavior"},
    {"What is stored in a pointer variable?\n", "B", "A) The value of a variable\n B) The memory address\n C) A random number\n D) A string"},
    {"What will the following code print?\n int x = 7;\n int* ptr = &x;\n std::cout << ptr << std::endl;\n", "B", "A) 7\n B) Address of x\n C) Compilation error\n D) Undefined behavior"},
    {"What does the following code do?\n int* ptr = nullptr;\n", "B", "A) Declares a dangling pointer\n B) Declares a null pointer\n C) Declares an int* set to 0\n D) Compilation error"},
    {"What is the value of arr[2] after the following code executes?\n int arr[3] = {1, 2, 3};\n int* ptr = arr;\n *(ptr + 2) = 10;\n", "C", "A) 1\n B) 2\n C) 10\n D) Compilation error"}
};

// Tier 2 Questions
std::vector<Question> tier2Questions = {
    {"What will the following code print?\n int x = 5;\n int& ref = x;\n ref = 10;\n std::cout << x << std::endl;\n", "B", "A) 5\n B) 10\n C) Compilation error\n D) Undefined behavior"},
    {"Which of the following will correctly declare a constant pointer to an integer?\n", "D", "A) int const* ptr;\n B) int* const ptr;\n C) const int* ptr;\n D) All of the above"},
    {"What will the following code output?\n int x = 10;\n int* ptr = &x;\n std::cout << ptr << std::endl;\n", "B", "A) 10\n B) Address of x\n C) Compilation error\n D) Undefined behavior"},
    {"Which of the following statements is true about references in C++?\n", "A", "A) Must be initialized\n B) Can be null\n C) Can be reassigned\n D) All of the above"},
    {"Will the following code compile?\n int* ptr = nullptr;\n int x = *ptr;\n", "B", "A) Yes\n B) No"},
    {"What does the & operator do when used in a declaration like int& ref?\n", "A", "A) Declares reference\n B) Declares pointer\n C) Gets address\n D) Declares constant"},
    {"What is the value of y after the following code executes?\n int x = 5;\n int& ref = x;\n ref = 7;\n int y = x;\n", "B", "A) 5\n B) 7\n C) Undefined\n D) Compilation error"},
    {"What will the following code output?\n int x = 5;\n int* ptr = &x;\n int** doublePtr = &ptr;\n std::cout << **doublePtr << std::endl;\n", "C", "A) Address of ptr\n B) Address of x\n C) 5\n D) Compilation error"},
    {"Which of the following is true about the nullptr keyword in C++?\n", "D", "A) Replaces NULL\n B) Assigned to any pointer\n C) Is strongly typed\n D) All of the above"},
    {"What is the result of the following code?\n int x = 5;\n int& ref = x;\n ref = 3;\n std::cout << &ref << \" \" << &x << std::endl;\n", "B", "A) Two different addresses\n B) Same address twice\n C) Compilation error\n D) Undefined behavior"}
};

// Tier 3 Questions
std::vector<Question> tier3Questions = {
    {"What will the following code print?\n int arr[3] = {10, 20, 30};\n int *ptr = arr;\n std::cout << *(ptr + 1) + *(ptr + 2) << std::endl;\n", "C", "A) 20\n B) 30\n C) 50\n D) Compilation Error"},
    {"What will the following code output?\n int x = 5, y = 10;\n int result = x > 3 && y < 20 ? x * y : x - y;\n std::cout << result << std::endl;\n", "A", "A) 50\n B) -5\n C) 10\n D) Compilation Error"},
    {"What does the following code do?\n int *ptr = new int(10);\n std::cout << *ptr;\n delete ptr;\n", "A", "A) Outputs 10\n B) Runtime error\n C) Undefined behavior\n D) Garbage value"},
    {"What is the output of this code?\n void modify(int &x, int y) {\n x += y;\n }\n int main() {\n int a = 10, b = 5;\n modify(a, b);\n std::cout << a << std::endl;\n return 0;\n }\n", "C", "A) 10\n B) 5\n C) 15\n D) Compilation Error"},
    {"What is the output of this code?\n int x = 0, y = 1;\n if (x || y && 0) {\n std::cout << \"True\";\n } else {\n std::cout << \"False\";\n }\n", "B", "A) True\n B) False\n C) Compilation Error\n D) Undefined Behavior"},
    {"What will the following code output?\n int x = 10;\n int *ptr = &x;\n int **pptr = &ptr;\n std::cout << **pptr << std::endl;\n", "A", "A) 10\n B) Address of x\n C) Compilation Error\n D) Undefined Behavior"},
    {"What is the value of the following code?\n int arr[4] = {1, 2, 3, 4};\n int *ptr = arr;\n std::cout << *(ptr + 2) + *(ptr + 3);\n", "C", "A) 3\n B) 4\n C) 7\n D) 6"},
    {"What happens if you fail to delete a dynamically allocated pointer?\n", "A", "A) Memory leak\n B) Deleted automatically\n C) Runtime error\n D) Undefined behavior"},
    {"What happens if you don't define a constructor in a class?\n", "B", "A) Program won't compile\n B) Default constructor provided\n C) Must create one\n D) Undefined behavior"}
};

// Tier 4 Questions
std::vector<Question> tier4Questions = {
    {"What happens if you call `delete` on a pointer that was not allocated using `new`?\n", "A", "A) Undefined behavior\n B) Nothing happens\n C) Program crashes\n D) Automatically frees memory"},
    {"What will the following code output?\n const int x = 5;\n int *ptr = (int*)&x;\n *ptr = 10;\n std::cout << x << std::endl;\n", "C", "A) 5\n B) 10\n C) Undefined behavior\n D) Compilation error"},
    {"What happens when you forget to use `delete[]` for a dynamically allocated array?\n", "A", "A) Memory leak\n B) Segfault\n C) Undefined behavior\n D) Automatically freed"},
    {"What is the primary purpose of the `const` keyword?\n", "C", "A) Allow mutability\n B) Reassign variables\n C) Prevent modification\n D) Allocate memory"},
    {"Which operator can be overloaded in C++?\n", "B", "A) `?:`\n B) `+`\n C) `sizeof`\n D) `.`"},
    {"Will the following code compile?\n std::vector<int> intArray[5];\n std::vector<std::vector<int>> intVector(intArray, intArray + 5);\n", "A", "A) Yes\n B) No, vector declaration is wrong\n C) No, types mismatch\n D) No, pointer ambiguity"},
    {"What will this code output?\n int arr[5] = {1, 2, 3, 4, 5};\n int &ref = arr[3];\n ref = 10;\n std::cout << arr[3] << std::endl;\n", "C", "A) 3\n B) 4\n C) 10\n D) Compilation Error"},
    {"What does this code print?\n class Test {\n public:\n int x;\n Test(int val) : x(val) {}\n int getX() { return x; }\n };\n int main() {\n Test obj(42);\n std::cout << obj.getX() << std::endl;\n return 0;\n }\n", "B", "A) 0\n B) 42\n C) Garbage Value\n D) Compilation Error"},
    {"What will this code do?\n int *ptr = nullptr;\n if (!ptr) {\n std::cout << \"Null\";\n } else {\n std::cout << \"Not Null\";\n }\n", "A", "A) Null\n B) Not Null\n C) Compilation Error\n D) Undefined Behavior"}
};

// Tier 5 Questions
std::vector<Question> tier5Questions = {
    {"Does the following code compile?\n int main() {\n {}\n {};\n []{};\n []{}();\n {{{}}};\n []}{}{}{}();\n []}{}{}(){}{}();\n }\n", "A", "A) Yes\n B) No, syntax error\n C) No, invalid lambdas\n D) No, mismatched braces"},
    {"What is the output of the following code?\n int main() {\n bool b = true;\n std::cout << ++b;\n }\n", "B", "A) 1\n B) 2\n C) true\n D) Undefined Behavior"},
    {"What is the output of the following code?\n int main() {\n char str[3] = \"Pie\";\n std::cout << str;\n }\n", "D", "A) Pie\n B) Pi\n C) Undefined Behavior\n D) Compilation Error"},
    {"What does the following code print?\n int x = 0;\n std::cout << (x-- > 0 ? \"Positive\" : \"Negative\");\n", "B", "A) Positive\n B) Negative\n C) Compilation Error\n D) Undefined Behavior"},
    {"Which of the following statements about `std::vector` is correct?\n", "A", "A) Dynamic resizing\n B) Uses linked lists internally\n C) Manual deallocation\n D) Can't store custom types"}
};

#endif
