## 0x1B. C - Sorting algorithms & Big O

## 1. Bubble Sort

**Description:**
Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the entire list is sorted.

**Time Complexity:**
- Best-case: O(n) - When the input is already sorted.
- Worst-case: O(n^2) - When the input is sorted in reverse order.
- Average-case: O(n^2).

**Use Cases:**
Bubble Sort is not efficient for large datasets but can be useful for small lists or educational purposes due to its simplicity.

## 2. Selection Sort

**Description:**
Selection Sort is an in-place comparison-based sorting algorithm. It divides the input list into two parts: a sorted and an unsorted subarray. The algorithm repeatedly selects the smallest (or largest) element from the unsorted subarray and moves it to the sorted subarray.

**Time Complexity:**
- Best-case: O(n^2).
- Worst-case: O(n^2).
- Average-case: O(n^2).

**Use Cases:**
Selection Sort is simple but not efficient for large datasets. It is rarely used in practice except for small lists.

## 3. Merge Sort

**Description:**
Merge Sort is a divide-and-conquer sorting algorithm. It recursively divides the input array into two halves, sorts each half, and then merges them back together in sorted order.

**Time Complexity:**
- Best-case: O(n log n).
- Worst-case: O(n log n).
- Average-case: O(n log n).

**Use Cases:**
Merge Sort is a stable and efficient sorting algorithm. It is widely used for sorting large datasets and is the basis for many external sorting algorithms.

## 4. Insertion Sort

**Description:**
Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It iterates through the input array and, for each element, inserts it into its correct position in the sorted part of the array.

**Time Complexity:**
- Best-case: O(n) - When the input is nearly sorted.
- Worst-case: O(n^2).
- Average-case: O(n^2).

**Use Cases:**
Insertion Sort is efficient for small datasets or when the input is already partially sorted. It is often used in practice for sorting small lists or as part of other sorting algorithms.

## 5. Counting Sort

**Description:**
Counting Sort is a non-comparison-based sorting algorithm that works for integers with a known range. It counts the occurrences of each element and uses this information to reconstruct a sorted array.

**Time Complexity:**
- Best-case: O(n + k) - When the range (k) of input values is small.
- Worst-case: O(n + k).
- Average-case: O(n + k).

**Use Cases:**
Counting Sort is efficient when the range of input values is relatively small, making it suitable for integer sorting.

## 6. Shell Sort

**Description:**
Shell Sort is an extension of Insertion Sort. It starts by sorting pairs of elements far apart from each other and progressively reduces the gap between elements to be compared and swapped. It uses a sequence of gap values.

**Time Complexity:**
- Best-case: O(n log^2 n) - With the right gap sequence.
- Worst-case: O(n^2) - In the worst case.
- Average-case: Depends on the gap sequence used.

**Use Cases:**
Shell Sort can be faster than some other quadratic sorting algorithms like Bubble Sort and Selection Sort. It is used when a stable, quadratic sorting algorithm is needed with better performance.

## 7. Heap Sort

**Description:**
Heap Sort is an in-place comparison-based sorting algorithm that works by dividing the input into a sorted and an unsorted region and iteratively selecting the maximum element from the unsorted region and placing it at the end of the sorted region.

**Time Complexity:**
- Best-case: O(n log n).
- Worst-case: O(n log n).
- Average-case: O(n log n).

**Use Cases:**
Heap Sort is efficient and often used for sorting large datasets. It is an in-place sorting algorithm and is commonly used as a component in algorithms like heaps and priority queues.

These are some of the most common sorting algorithms used in computer science and programming. The choice of which sorting algorithm to use depends on factors such as the size of the dataset, the nature of the data, and the desired performance characteristics.
