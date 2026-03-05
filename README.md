# Pigeonhole Sorting

## Overview
This repository contains a C++ implementation of the **Pigeonhole Sorting Algorithm**. Unlike standard comparison-based sorts (e.g., Quicksort, Mergesort) which are bounded by $O(n \log n)$ time complexity, this implementation utilizes a non-comparison counting strategy to achieve $O(n + k)$ linear time complexity.

## Algorithm Description
The Pigeonhole Sort algorithm functions by:
1. **Identifying the Range:** Determining the minimum and maximum values in the dataset to define the required "pigeonholes."
2. **Distribution:** Iterating through the input array and placing each element into its corresponding "hole" (an auxiliary array index).
3. **Collection:** Sequentially iterating through the holes and reconstructing the sorted array based on the frequency counts.


## Technical Analysis
### Time Complexity
* **Best Case:** $O(n + k)$
* **Average Case:** $O(n + k)$
* **Worst Case:** $O(n + k)$
*(Where $n$ is the number of elements and $k$ is the range of values, i.e., $max - min + 1$)*

### Space Complexity: The Trade-off
The algorithm operates with $O(k)$ auxiliary space. This implementation uses a `std::vector` for heap-based allocation, allowing the program to handle large datasets up to the system's memory limits.



## Implementation Details
* **Language:** C++
* **Memory Management:** Utilizes dynamic memory allocation via `std::vector` to prevent stack overflow errors common with large static arrays.
* **Robustness:** Includes input validation to ensure all data points fall within the defined range, preventing runtime memory access violations.

## Experimental Results
The following benchmarks were conducted on a dataset of 10,000,000 items:

| Dataset Size | Range ($k$) | Time Taken | Memory Usage |
| :--- | :--- | :--- | :--- |
| 10,000,000 | 10,000,000 | ~0.85s | ~40MB |

*Note: Performance may vary based on CPU cache efficiency and system memory bandwidth.*

## Efficiency and Limitations
* **Efficiency:** This algorithm is theoretically optimal for datasets where the range of values is roughly proportional to the number of elements.
* **Limitations:** The primary bottleneck is the **Memory Requirement**. If the input range ($k$) significantly exceeds the number of items ($n$), or if the range is massive (e.g., $k > 10^9$), the memory consumption becomes inefficient or exceeds system capabilities. 

## Usage
1. Compile the code: `main.cpp`
2. Run the executable
3. Follow the on-screen prompts to input data parameters.