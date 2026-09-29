# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given $n$ triangles, specifically, their sides $a_i$, $b_i$ and $c_i$. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides $a$, $b$ and $c$ is Heron's formula:

$S = \sqrt{p \times (p-a) \times (p-b) \times (p-c)}$ where $p={\frac {a+b+c} 2}$.


**Input Format**

The first line of each test file contains a single integer $n$. $n$ lines follow with three space-separated integers, $a_i$, $b_i$ and $c_i$.

**Constraints**

+ $1 \leq n \leq 100$
+ $1 \leq a_i,b_i,c_i \leq 70$
+ $a_i+b_i>c_i$,$a_i+c_i>b_i$ and $b_i+c_i>a_i$

**Output Format**

Print exactly $n$ lines. On each line print $3$ space-separated integers, the $a_i$, $b_i$ and $c_i$ of the corresponding triangle.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T06:04:14.429Z  

```c
#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find minimum distance to any of the 4 borders
            int min_dist = min(min(i, j), min(size - 1 - i, size - 1 - j));
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem)