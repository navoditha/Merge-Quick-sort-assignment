# Merge-Quick-sort-assignment
Implementation and performance comparison of Merge Sort and Quick Sort in C.

## Problem Statement

A social media application needs to sort the following fixed-length IDs:

324, 125, 456, 218, 102, 389, 275, 147

## Algorithms Implemented

1. Merge Sort
2. Quick Sort

## Input

324 125 456 218 102 389 275 147

## Final Sorted Output

102 125 147 218 275 324 389 456

## Time Complexity

| Algorithm | Best | Average | Worst |
|-----------|------|---------|-------|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |

## Space Complexity

Merge Sort: O(n)

Quick Sort: O(log n) average, O(n) worst case

## Conclusion

Both algorithms successfully sorted the given IDs.
Merge Sort provides predictable O(n log n) worst-case performance,
while Quick Sort generally uses less additional memory but can have
O(n²) worst-case performance depending on pivot selection.
