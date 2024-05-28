# Best practice

1. Ensure non-null right after malloc, realloc and calloc
2. Assign null right after free to prevent dangling pointer from being used later
3. RAII; Initialize ptr on demand to avoid wild(premature) pointer
4. Must make allocation followed by deallocation
5. Take care about alias pointers to avoid double free
6. Prefer typedef when using pointer to function
7. Surround parenthesis for every parameters of macro and itself
