# DAA Lab PCS 505: Week 02

&nbsp;&nbsp;

> # Problem 01: Find the key and its no of duplicates

## Problem Statement: 
Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be three input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array.
* Third line contains the key element that need to be searched in the array.


## Output Format:
* The output will have T number of lines.
* For each test case T, output will be the key element and its number of copies in the array if the key element is present in the array otherwise print “Key not present”.



## Sample Input:
```
2
10
235 235 278 278 763 764 790 853 981 981
981
15
1 2 2 3 3 5 5 5 25 75 75 75 97 97 97
75

```

## Sample Output:
```
981 - 2
75 - 3

```
&nbsp;&nbsp;


> # Problem 02:  Find three indices i, j, k

## Problem Statement: 
Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k]. 


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be two input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array


## Output Format:
* The output will have T number of lines.
* For each test case T, print the value of i, j and k, if found else print “No sequence found”.


## Sample Input:
```
3
5
1 5 84 209 341
10
24 28 48 71 86 89 92 120 194 201
15
64 69 82 95 99 107 113 141 171 350 369 400 511 590 666

```

## Sample Output:
```
No sequence found!
2, 7, 8
1, 6, 9

```
&nbsp;&nbsp;

> # Problem 03: Count Pairs

## Problem Statement: 
Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K. 


## Input Format:
* The first line contains number of test cases, T.
* For each test case, there will be three input lines.
* First line contains n (the size of array).
* Second line contains space-separated integers describing array.
* Third line contains the key element.


## Output Format:
* The output will have T number of lines.
* For each test case T, output will be the total count i.e., number of times such pair exists.


## Sample Input:
```
2
5
1 51 84 21 31
20
10
24 71 16 92 12 28 48 14 20 22
4

```

## Sample Output:
```
2
4

```

&nbsp;&nbsp;
