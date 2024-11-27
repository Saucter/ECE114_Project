#ifndef QUESTIONTIERS_H
#define QUESTIONTIERS_H

#include <vector>
#include "Question.h"

// Tier 1 Questions
std::vector<Question> tier1Questions = {
    {"What is the value of *ptr after the following code executes?\n @int x = 10;@\n @int *ptr = &x;@\n @*ptr = 20;@\n", "B", "A) 10\n B) 20\n C) The memory address of x\n D) Undefined"},
    {"What will the following code print?\n @int x = 5;@\n @int y = 10;@\n @int* ptr = &x;@\n @ptr = &y;@\n @std::cout << *ptr << std::endl;@\n", "B", "A) 5\n B) 10\n C) Address of y\n D) Compilation error"},
    {"Which operator is used to access the value pointed to by a pointer?\n", "B", "A) &\n B) *\n C) ->\n D) ."},
    {"What does the nullptr keyword represent in C++?\n", "B", "A) A null character\n B) A pointer that points to no valid object or function\n C) A function to reset pointers\n D) An undefined behavior"},
    {"What will the following code output?\n @int x = 5;@\n @int y = 3;@\n @int z = x % y;@\n @std::cout << z << std::endl;@\n", "B", "A) 1\n B) 2\n C) 3\n D) Compilation error"},
    {"What is the value of result after the following code executes?\n @int x = 2;@\n @int y = 3;@\n @int result = x * y + y / x;@\n", "C", "A) 6\n B) 7\n C) 8\n D) Compilation error"},
    {"What is the output of the following code?\n @int x = 5;@\n @if (x > 3 ? x < 6 : x > 10) {@\n @std::cout << \"True\" << std::endl;@\n @} else {@\n @std::cout << \"False\" << std::endl;@\n @}@\n", "A", "A) True\n B) False\n C) Compilation error\n D) Undefined behavior"},
    {"Which direction is the assignment operator = evaluated?\n", "B", "A) Left to right\n B) Right to left\n C) Top to bottom\n D) None of the above"},
    {"What will the following code print?\n @int arr[3] = {1, 2, 3};@\n @int* ptr = arr;@\n @std::cout << *(ptr + 1) << std::endl;@\n", "B", "A) 1\n B) 2\n C) 3\n D) Compilation error"},
    {"What is the correct way to allocate memory for an integer dynamically in C++?\n", "B", "A) @int* ptr = malloc(sizeof(int));@\n B) @int* ptr = new int;@\n C) @int* ptr = allocate<int>();@\n D) @int ptr = new int;"},
    {"What will the following code output?\n @int x = 10;@\n @int* ptr = &x;@\n @std::cout << *ptr << std::endl;@\n", "C", "A) 0\n B) The memory address of x\n C) 10\n D) Compilation error"},
    {"What is the correct way to declare a pointer to an integer?\n", "B", "A) int ptr;\n B) int* ptr;\n C) int ptr;\n D) ptr int;"},
    {"What will the following code print?\n @int arr[5] = {10, 20, 30, 40, 50};@\n @int* ptr = arr;@\n @std::cout << *(ptr + 2) << std::endl;@\n", "C", "A) 10\n B) 20\n C) 30\n D) Compilation error"},
    {"Which operator is used to get the memory address of a variable?\n", "A", "A) &\n B) *\n C) ->\n D) ++"},
    {"What does the following code do?\n @int x = 5;@\n @int* ptr = &x;@\n @*ptr = 15;@\n", "A", "A) Changes the value of x to 15\n B) Changes the memory address of ptr to 15\n C) Produces a compilation error\n D) Nothing"},
    {"What will the following code output?\n @int x = 3;@\n @int y = 4;@\n @std::cout << (x > y ? x : y) << std::endl;@\n", "B", "A) 3\n B) 4\n C) Compilation error\n D) Undefined behavior"},
    {"What is stored in a pointer variable?\n", "B", "A) The value of a variable\n B) The memory address of a variable\n C) A random number\n D) A string"},
    {"What will the following code print?\n @int x = 7;@\n @int* ptr = &x;@\n @std::cout << ptr << std::endl;@\n", "B", "A) 7\n B) The memory address of x\n C) Compilation error\n D) Undefined behavior"},
    {"What does the following code do?\n @int* ptr = nullptr;@\n", "B", "A) Declares a dangling pointer\n B) Declares a pointer that points to no valid object\n C) Declares a pointer to an integer with the value 0\n D) Compilation error"},
    {"What is the value of arr[2] after the following code executes?\n @int arr[3] = {1, 2, 3};@\n @int* ptr = arr;@\n @*(ptr + 2) = 10;@\n", "C", "A) 1\n B) 2\n C) 10\n D) Compilation error"}
};

// Tier 2 Questions
std::vector<Question> tier2Questions = {
    {"What will the following code print?\n @int x = 5;@\n @int& ref = x;@\n @ref = 10;@\n @std::cout << x << std::endl;@\n", "B", "A) 5\n B) 10\n C) Compilation error\n D) Undefined behavior"},
    {"Which of the following will correctly declare a constant pointer to an integer?\n", "D", "A) int const* ptr;\n B) int* const ptr;\n C) const int* ptr;\n D) All of the above"},
    {"What will the following code output?\n @int x = 10;@\n @int* ptr = &x;@\n @std::cout << ptr << std::endl;@\n", "B", "A) 10\n B) Memory address of x\n C) Compilation error\n D) Undefined behavior"},
    {"Which of the following statements is true about references in C++?\n", "A", "A) A reference must always be initialized.\n B) A reference can be null.\n C) A reference can be reassigned.\n D) All of the above"},
    {"Will the following code compile?\n @int* ptr = nullptr;@\n @int x = *ptr;@\n", "B", "A) Yes\n B) No"},
    {"What does the & operator do when used in a declaration like int& ref?\n", "A", "A) Declares a reference to an integer\n B) Declares a pointer to an integer\n C) Gets the address of a variable\n D) Declares a constant integer"},
    {"What is the value of y after the following code executes?\n @int x = 5;@\n @int& ref = x;@\n @ref = 7;@\n @int y = x;@\n", "B", "A) 5\n B) 7\n C) Undefined\n D) Compilation error"},
    {"What will the following code output?\n @int x = 5;@\n @int* ptr = &x;@\n @int** doublePtr = &ptr;@\n @std::cout << **doublePtr << std::endl;@\n", "C", "A) The memory address of ptr\n B) The memory address of x\n C) 5\n D) Compilation error"},
    {"Which of the following is true about the nullptr keyword in C++?\n", "D", "A) It replaces NULL in C++11 and beyond.\n B) It can be assigned to any pointer.\n C) It is strongly typed compared to NULL.\n D) All of the above"},
    {"What is the result of the following code?\n @int x = 5;@\n @int& ref = x;@\n @ref = 3;@\n @std::cout << &ref << \" \" << &x << std::endl;@\n", "B", "A) Two different memory addresses\n B) Same memory address twice\n C) Compilation error\n D) Undefined behavior"},
    {"What will the following code output?\n @int x = 7;@\n @int* ptr = &x;@\n @int** ptr2 = &ptr;@\n @std::cout << *ptr2 << std::endl;@\n", "B", "Memory address of x"},
    {"What will the following code output?\n @int arr[3] = {10, 20, 30};@\n @int* ptr = arr;@\n @std::cout << ptr[1] << std::endl;@\n", "20", ""},
    {"What is the value of y after this code?\n @int x = 5;@\n @int& ref = x;@\n @x = 8;@\n @int y = ref;@\n", "8", ""},
    {"What will the following code output?\n @int x = 10;@\n @int y = 20;@\n @int* ptr = &x;@\n @ptr = &y;@\n @std::cout << *ptr << std::endl;@\n", "20", ""},
    {"What will the following code output?\n @int x = 3;@\n @int& ref1 = x;@\n @int& ref2 = ref1;@\n @std::cout << ref2 << std::endl;@\n", "3", ""},
    {"What does this code print?\n @int x = 2;@\n @int* ptr = &x;@\n @std::cout << *ptr + x << std::endl;@\n", "4", ""},
    {"What will the following code output?\n @int x = 5;@\n @int* ptr = &x;@\n @std::cout << &(*ptr) << std::endl;@\n", "Memory address of x", ""},
    {"What is the output of this code?\n @int arr[3] = {1, 2, 3};@\n @std::cout << *(arr + 2) << std::endl;@\n", "3", ""},
    {"What is the result of dereferencing a null pointer in C++?\n", "Undefined behavior", ""},
    {"What will the following code output?\n @int x = 3;@\n @int y = 4;@\n @std::cout << (x > y ? x : y) << std::endl;@\n", "4", ""}
};

// Tier 3 Questions
std::vector<Question> tier3Questions = {
    {"What will the following code print?\n @int arr[3] = {10, 20, 30};@\n @int *ptr = arr;@\n @std::cout << *(ptr + 1) + *(ptr + 2) << std::endl;@\n", "C", "A) 20\n B) 30\n C) 50\n D) Compilation Error"},
    {"What will the following code output?\n @int x = 5, y = 10;@\n @int result = x > 3 && y < 20 ? x * y : x - y;@\n @std::cout << result << std::endl;@\n", "A", "A) 50\n B) -5\n C) 10\n D) Compilation Error"},
    {"What does the following code do?\n @int *ptr = new int(10);@\n @std::cout << *ptr;@\n delete ptr;@\n", "A", "A) Outputs 10\n B) Causes a runtime error\n C) Results in undefined behavior\n D) Outputs a garbage value"},
    {"What is the output of this code?\n @void modify(int &x, int y) {@\n @x += y;@\n @}@\n @int main() {@\n @int a = 10, b = 5;@\n @modify(a, b);@\n @std::cout << a << std::endl;@\n return 0;@\n }@\n", "C", "A) 10\n B) 5\n C) 15\n D) Compilation Error"},
    {"What is the output of this code?\n @int x = 0, y = 1;@\n @if (x || y && 0) {@\n @std::cout << \"True\";@\n @} else {@\n @std::cout << \"False\";@\n @}@\n", "B", "A) True\n B) False\n C) Compilation Error\n D) Undefined Behavior"},
    {"What will the following code output?\n @int x = 10;@\n @int *ptr = &x;@\n @int **pptr = &ptr;@\n @std::cout << **pptr << std::endl;@\n", "A", "A) 10\n B) Address of x\n C) Compilation Error\n D) Undefined Behavior"},
    {"What is the value of the following code?\n @int arr[4] = {1, 2, 3, 4};@\n @int *ptr = arr;@\n @std::cout << *(ptr + 2) + *(ptr + 3);@\n", "C", "A) 3\n B) 4\n C) 7\n D) 6"},
    {"What happens if you fail to delete a dynamically allocated pointer?\n", "A", "A) Memory leak\n B) Deleted automatically\n C) Runtime error\n D) Undefined behavior"},
    {"What does the expression *(arr + 2) evaluate to for int arr[3] = {10, 20, 30}?\n", "30", ""},
    {"What happens if you don't define a constructor in a class?\n", "B", "A) The program won't compile\n B) A default constructor is automatically provided\n C) You must manually create one\n D) Undefined behavior"},
    {"What does the following declaration do: int* func()?\n", "return", ""},
    {"What does the following loop print?\n @for (int i = 0; i < 2; i++)@\n @for (int j = 0; j < 3; j++)@\n @std::cout << i << j;@\n", "001011102021", ""},
    {"What does sizeof(arr)/sizeof(arr[0]) calculate for arr[5]?\n", "5", ""},
    {"What does (ptr1 == ptr2) evaluate when comparing two pointers?\n", "0", ""},
    {"What operator is used to access a class method accessed through a pointer to an object?\n", "->", ""},
    {"What happens if you dereference a null pointer?\n", "undefined", ""},
    {"What does the sizeof operator return for a char variable in C++?\n", "1", ""},
    {"What is the value of (1 << 3) in C++?\n", "8", ""},
    {"What is the difference between prefix and postfix increment operators?\n", "Order", ""},
    {"What is the result of arr[-1] in C++?\n", "undefined", ""}
};

// Tier 4 Questions
std::vector<Question> tier4Questions = {
    {"What happens if you call `delete` on a pointer that was not allocated using `new`?\n", "A", "A) Undefined behavior\n B) Nothing happens\n C) The program crashes\n D) It automatically frees memory"},
    {"What will the following code output?\n @const int x = 5;@\n @int *ptr = (int*)&x;@\n @*ptr = 10;@\n @std::cout << x << std::endl;@\n", "C", "A) 5\n B) 10\n C) Undefined behavior\n D) Compilation error"},
    {"What happens when you forget to use `delete[]` for a dynamically allocated array?\n", "A", "A) Memory leak\n B) Segfault\n C) Undefined behavior\n D) Automatically freed"},
    {"What is the primary purpose of the `const` keyword?\n", "C", "A) To allow mutable variables\n B) To declare variables that can be reassigned\n C) To prevent modification of variables\n D) To allocate memory dynamically"},
    {"Which operator can be overloaded in C++?\n", "B", "A) `?:`\n B) `+`\n C) `sizeof`\n D) `.`"},
    {"What is the result of the following code?\n @int *ptr = nullptr;@\n @*ptr = 10;@\n", "segfault", ""},
    {"Will the following code compile?\n @std::vector<int> intArray[5];@\n @std::vector<std::vector<int>> intVector(intArray, intArray + 5);@\n", "A", "A) Yes\n B) No because vector declaration is wrong\n C) No because the vectors are not of the same type\n D) No because pointer position is ambiguous"},
    {"What will this code output?\n @int arr[5] = {1, 2, 3, 4, 5};@\n @int &ref = arr[3];@\n @ref = 10;@\n @std::cout << arr[3] << std::endl;@\n", "C", "A) 3\n B) 4\n C) 10\n D) Compilation Error"},
    {"What does this code print?\n @class Test {@\n @public:@\n @int x;@\n @Test(int val) : x(val) {}@\n @int getX() { return x; }@\n @};@\n @int main() {@\n @Test obj(42);@\n @std::cout << obj.getX() << std::endl;@\n return 0;@\n }@\n", "B", "A) 0\n B) 42\n C) Garbage Value\n D) Compilation Error"},
    {"What will this code do?\n @int *ptr = nullptr;@\n @if (!ptr) {@\n @std::cout << \"Null\";@\n @} else {@\n @std::cout << \"Not Null\";@\n @}@\n", "A", "A) Null\n B) Not Null\n C) Compilation Error\n D) Undefined Behavior"}
};

// Tier 5 Questions
std::vector<Question> tier5Questions = {
    {"Does the following code compile?\n @int main() {@\n @{}@\n @{};@\n @[]{};@\n @[]{}();@\n @{{{}}};@\n @[]}{}{}{}();@\n @[]}{}{}(){}{}();@\n }@\n", "A", "A) Yes, it compiles successfully\n B) No, because of a syntax error\n C) No, because the lambda expressions are invalid\n D) No, because of mismatched braces"},
    {"What is the output of the following code?\n @int main() {@\n @bool b = true;@\n @std::cout << ++b;@\n }@\n", "B", "A) 1\n B) 2\n C) true\n D) Undefined Behavior"},
    {"What is the output of the following code?\n @int main() {@\n @char str[3] = \"Pie\";@\n @std::cout << str;@\n }@\n", "D", "A) Pie\n B) Pi\n C) Undefined Behavior\n D) Compilation Error"},
    {"What does the following code print?\n @int x = 0;@\n @std::cout << (x-- > 0 ? \"Positive\" : \"Negative\");@\n", "B", "A) Positive\n B) Negative\n C) Compilation Error\n D) Undefined Behavior"},
    {"Which of the following statements about `std::vector` is correct?\n", "A", "A) It supports dynamic resizing\n B) It uses linked list-based storage internally\n C) It requires manual memory deallocation\n D) It cannot store objects of user-defined types"},
    {"What is the result of this code?\n @int x = 5 / 2 * 2;@\n", "4", ""},
    {"What does `sizeof('a')` return in C++?\n", "4", ""},
    {"What happens when you increment a pointer to an array beyond its bounds?\n", "undefined", ""},
    {"What is the value of `sizeof(int)` on a 32-bit system?\n", "4", ""},
    {"What happens when you assign a string literal to a `char*`?\n", "undefined", ""},
    {"What will this code print?\n @int main() {@\n @int x = 5;@\n @int &y = x;@\n @y++;@\n @std::cout << x;@\n }@\n", "6", ""},
    {"What keyword prevents inheritance in C++?\n", "final", ""},
    {"What is the result of `x = x++ + ++x;` for `int x = 1`?\n", "undefined", ""},
    {"What happens when you call `delete` on a pointer twice?\n", "undefined", ""},
    {"What does the following expression return: `5 | 3`?\n", "7", ""},
    {"What is the result of accessing `arr[-1]` in C++?\n", "undefined", ""},
    {"What is the output of this code?\n @int arr[3] = {1, 2, 3};@\n @std::cout << arr[3];@\n", "undefined", ""},
    {"What does the following code output?\n @int main() {@\n @bool b = true;@\n @std::cout << b + 1;@\n }@\n", "2", ""},
    {"What happens when you use a dangling reference?\n", "undefined", ""},
    {"What is the result of this code?\n @int x = 1;@\n @std::cout << (x == 1) ? \"True\" : \"False\";@\n", "True", ""}
};


#endif