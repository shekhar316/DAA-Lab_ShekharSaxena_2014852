# DAA Lab PCS 505: Week 04

&nbsp;&nbsp;

> # Problem 01: Merge Sort with counting inversions

## Problem Statement: 
Given an unsorted array of integers, design an algorithm and a program to sort the array by dividing array into subarrays and combining these subarrays after sorting each of them. Your program should also find the number of comparisions and inversions during the sorting of array.


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be two input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array.


## Output Format:
* The output will have T number of lines.
* For each test case T, there will be three output lines.
* First line will give the sorted array.
* Second line will give total number of comparisons.
* Third line will give total number inversions.


## Sample Input:
```
3
8
-23 65 -31 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325

```

## Sample Output:
```
-31 -23 32 45 46 65 76 89 
Comparisions: 16
Inversions: 13
21 32 34 46 51 54 65 76 78 97 
Comparisions: 22
Inversions: 28
-12 22 31 42 46 54 63 65 86 223 324 325 553 645 652 
Comparisions: 43
Inversions: 54

```
&nbsp;&nbsp;


> # Problem 02: Quick Sort with Random Pivoting

## Problem Statement: 
Given an unsorted array of integers, design an algorithm and implement a program to sort this array by partition the array into two sub parts based on the pivot element such that one part will hold the values less than pivot element and other will hold values greator than pivot element. Pivot element should be selected randomly from array. Your program should also find number of comparisions and swaps during the sorting.


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be two input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array.


## Output Format:
* The output will have T number of lines.
* For each test case T, there will be three output lines.
* First line will give the sorted array.
* Second line will give total number of comparisons.
* Third line will give total number of swaps required.


## Sample Input:
```
3
8
-23 65 -31 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325

```

## Sample Output:
```
-31 -23 32 45 46 65 76 
Comparisions: 18
Swaps: 16
21 32 34 46 51 54 65 76 78 
Comparisions: 20
Swaps: 16
-12 22 31 42 46 54 63 65 86 223 324 325 553 645 
Comparisions: 40
Swaps: 27

No. of comparisions and swaps depends on randomly selected pivot.

```
&nbsp;&nbsp;

> # Problem 03: kth smallest element in unsorted array

## Problem Statement: 
Given an unsorted array of integers, design an algorithm and implement it using a program to find kth smallest or greatest element in array (Time Complexity = O(n)


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be three input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array.\
* Third line contains k.


## Output Format:
* The output will have T number of lines.
* For each test case, output will be kth smallest or greatest number. If kth is not present, then print "Not Present".

## Sample Input:
```
2
10
123 656 54 765 344 514 765 34 765 234
3
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601
8

```

## Sample Output:
```
123
78

```
