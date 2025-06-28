## [Merge Sort In-Place](https://codestudio-infra.codingninjas.com/studio/problems/merge-sort-in-place_1118623?interviewProblemRedirection=true&search=Merge%20sort)

### Easy

---

### Problem statement

You are given an array consisting of **N integers**. Your task is to sort the array in non-descending order using **merge sort**. Perform the task as **in-place**.

**Note:**  
In-place means that your implementation does not require extra memory for merge operation, unlike the standard implementation.

---

### Example

Let the array be `[1, 2, -3, 4, -4, -5]`.  
On sorting the array in non-descending order we get the resulting array: `[-5, -4, -3, 1, 2, 4]`.

---

### Detailed explanation

#### Constraints:

- `1 <= T <= 10`
- `1 <= N <= 5000`
- `-10^5 <= Arr[i] <= 10^5`

Where **T** represents the number of test cases and **N** represents the number of elements present in the array.

**Time Limit:** 1 sec

---

### Sample Input 1:

```

2
5
1 -4 -2 5 3
2
2 1

```

### Sample Output 1:

```

-4 -2 1 3 5
1 2

```

**Explanation 1:**

- For the **first test case** we have array: `[1, -4, -2, 5, 3]` and **N = 5**.  
  On sorting the array in non-descending order we get: `[-4, -2, 1, 3, 5]`.

- For the **second test case** we have array: `[2, 1]` and **N = 2**.  
  On sorting the array in non-descending order we get: `[1, 2]`.

---

### Sample Input 2:

```

3
4
1 -5 -5 3
5
-1 -2 3 4 5
1
-2

```

### Sample Output 2:

```

-5 -5 1 3
-2 -1 3 4 5
-2

```

---

