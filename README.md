# Sorting
Sorting is a process of ordering individual elements of a list according to their proper rank, either in ascending or descending order. A programming logic with few steps which can sort a bunch of elements are called sorting algorithms. Different types of sorting algorithms have different logics and steps. C programming language is the best to start understanding sorting algorithms. However, sorting algorithms are not limited to C programming language. These can be implemented by any programming languages like C++, C#, JAVA, Python, Javascript, Objective C etc. We can easily sort a list of elements by means of iterations and condition check statements. We require one outer loop and one inner loop and one swap function to do the purpose. Let us implement below steps to understand a simple sorting logic.

# Sorting efficiency
The count of the element is small the number of iterations in the sorting will be less. As the number grows the number of iterations also increases. Now suppose we have a record of elements inside a database having count of several thousands. The problem comes with the performance of the sorting. Computer takes much longer time to sort the elements in the list. Efficiency of a sorting algorithm is often expressed with the order of O(n) and denoted with Big-O notation. A simple sorting algorithm implements two loops where outer loop can grow to N and for each iteration of outer loop, the inner loop can take (N - 1) iterations. So total number of steps for this sorting algorithm will be N times (N-1). This sorting will have a time complexities of the order of O(n*n) or O(n^2). A sorting algorithms is always chosen based on its time performance. Order of O(n^2) is for small number of elements but not a good value for considering a large number of elements. Some sorting algorithms uses recursion and better logic to give better performance. We will discuss all algorithms one by one.

# Sorting scaling
Another problem comes when the size of individual elements are large and total number of elements are also large that the entire list of elements cannot be fitted in main memory for sorting at one go. Entire elements are then divided into smaller groups. Groups are sorted and merged back.

Therefore considering the scale, the sorting mechanism has been divided into are two main categories :-

Internal sorting
External sorting

# Internal sorting
Internal sorting is done by loading all the elements in the main memory.

# External sorting
When individual element size is more and number of elements are large enough to hold all the elements in main memory external sorting is used. External sorting loads a portion of elements from secondary memory (like HDD) in main memory and sorts and then saves back to secondary storage. Later all the individual sorted fragments are merged in the main group.
We are discussing mainly internal sorting here. There are several algorithms used for this purpose each one has its own optimization techniques to execute the sort task in minimum CPU cycle thus to save time and energy.

# Sorting algorithms
There are the several internal sorting used in practical fields.

# Bubble Sort:
  A sorting algorithm which compares one element to its next element and if requires it swaps like a bubble.
# Selection Sort:
  A sorting algorithm which selects a position in the elements and compares it to the rest of the positions one by one.
# Insertion Sort:
  A sorting algorithm which selects one element from the array and is compared to the one side of the array. Element is inserted to the proper position while shifting others.
# Quick Sort:
  A sorting algorithm which divides the elements into two subsets and again sorts recursively.
# Heap Sort:
  A sorting algorithm which is a comparison based sorting technique based on Binary Heap data structure. ,
# Merge sort:
  A sorting algorithm which divides the elements to subgroups and then merges back to make a sorted.
# Radix Sort:
  A sorting algorithm used for numbers. It sorts the elements by rank of the individual digits.

Merge sort can be used for external sorting also. In that case, a subset of the entire list of the elements are loaded in main memory and sorted at a time.

These sorting algorithms are one of the most used in computer science. Each algorithm has its own advantage and disadvantage and complexity. Reader must have a good understanding of complexity and big O notation before he/she can understand the efficiency of each algorithm. We will discuss each algorithm in details in the next few sections. We will explain the mechanism and will give an example with code in C language to understand the algorithm deeply.




