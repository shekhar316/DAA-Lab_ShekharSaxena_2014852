# DAA Lab PCS 505: Week 02

&nbsp;&nbsp;

> # Problem 01: Linear Search

## Problem Statement: 
Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether a given key element is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)


## Input Format:
* The first line contains a number of test cases, T. 
* For each test case, there will be three input lines. 
* First line contains n (the size of array). 
* Second line contains n space-separated integers describing the array. 
* Third line contains the key element that needs to be searched in the array.


## Output Format:
* The output will have a T number of lines. 
* For each test case, output will be “Present” if the key element is found in the array, otherwise “Not Present”.
* Also for each test case output the number of comparisons required to search the key


## Sample Input:
```
3
8
34 35 65 31 25 89 64 30
89
5
977 354 244 546 355
244
6
23 64 13 67 43 56
63

```

## Sample Output:
```
Present 6
Present 3
Not Present 6

```
&nbsp;&nbsp;


> # Problem 02: Binary Search

## Problem Statement: 
Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).


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
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

```

## Sample Output:
```
Present 3
Not Present 4
Present 3

```
&nbsp;&nbsp;

> # Problem 03: Jump Search

## Problem Statement: 
Given an already sorted array of positive integers, design an algorithm and
implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[] of size n and block (to be jumped) size m, search at the indexes arr[0], arr[m], arr[2m].....arr[km] and so on. Once the interval (arr[km] < key < arr[ (k+1)m ]) is found, perform a linear search operation from the index km to find the element key. (Time Complexity = O(√n), where n is the number of elements need to be scanned for searching).


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
3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

```

## Sample Output:
```
Present 3
Not Present 4
Present 5

```

&nbsp;&nbsp;

> # Problem 04: Exponential Search

## Problem Statement: 
Given an already sorted array of positive integers, design an algorithm
and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[] of size n, search at the indexes arr[0], arr[1], arr[2], arr[4],.....,arr[2^k] and so on. Once the interval (arr[2^k ] < key < arr[2^(k+1)]) is found, perform a linear search or binary search operation from the index 2^k to find the element key. (Complexity = O(logn), where n is the number of elements need to be scanned for searching):


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
3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999

```

## Sample Output:
```
Present 5
Not Present 7
Present 6

```