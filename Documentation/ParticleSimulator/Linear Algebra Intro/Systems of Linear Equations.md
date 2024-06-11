## Algebraic view of systems of equations (#1.2)
----

A **linear equation** is an equation of the form 
$$a_{1}x_1+a_{2}x_{2}+...+a_{n}x_{n}=b$$
> $a_{1},...,a_{n}$ are real numbers
> b is a constant term
> $x_{1},...,x_{n}$ are variables

A **system of linear equations** is a list of equations

$$
\begin{gathered}
a_{11} x_1 + a_{12} x_2 + \ldots + a_{1n} x_n = b_1 \\
a_{21} x_1 + a_{22} x_2 + \ldots + a_{2n} x_n = b_2 \\
\vdots \\
a_{m1} x_1 + a_{m2} x_2 + \ldots + a_{mn} x_n = b_m
\end{gathered}
$$

A **solution** to a system of linear equations is an assignment of real numbers to the variables that is a solution to all of the equations in the system.
> **Consistent** $\rightarrow$ solutions >= 1<br>
> **Inconsistent** $\rightarrow$ solutions = 0

## Elementary Operations  (#1.3)
---
Two systems are equivalents if they share <u>the</u> same set of solutions. 
``` ElementaryOperations
1. Interchange the order in which the equations are listed
2. Multiply any equation by a non-zero scalar.
3. Add a multiple of one equation to another equation.
```

A **matrix** is a 2-dimensional array of numbers. An **augmented matrix** has two parts separated by a vertical line (coefficients, and constants) $\rightarrow$ variables are the columns, rows are the equations
The augmented matrix of the system of linear equations

$$
\begin{gathered}
a_{11} x_1+\ldots+a_{1 n} x_n=b_1 \\
\vdots \\
a_{m 1} x_1+\ldots+a_{m n} x_n=b_m \\
{\left[\begin{array}{ccc|c}
a_{11} & \cdots & a_{1 n} & b_1 \\
\vdots & & \vdots & \vdots \\
a_{m 1} & \cdots & a_{m n} & b_m
\end{array}\right]}
\end{gathered}
$$

The elementary row operations are the following:
1. Switch two rows. (Notation: $R_{i} \leftrightarrow R_{j}$ to switch rows i and j)
2. Multiply a row by a non-zero number. (Notation: $R_{i}\leftarrow kR_{j}$ to multiply row i by k).
3. Add a multiple of one row to another row. (Notation: $R_{i}\leftarrow R_{i}+kR_{j}$ to add k times row j to row i)

## Gaussian elimination (#1.4)
---
An entry of an augmented matrix is called a **leading/pivot** entry if it is the leftmost non-zero entry of a row. An augmented matrix is in echelon form if:
1. All rows of zeros are below all non-zero rows.
2. Each leading entry of a row is in a column to the right of the leading entry of any row above it.

A column containing a pivot entry is also called a **pivot column**.

$$
\left[\begin{array}{rrr|r} 1 & 0 & 0 & 8 \\\ 0 & 1 & 0 & 1 \\\ 0 & 0 & 1 & 7 \end{array}\right] \leftarrow \text{One Solution}
$$

$$
\left[\begin{array}{rrr|r} 1 & 0 & 0 & 8 \\\ 0 & 1 & 0 & 1 \\\ 0 & 0 & 0 & 7 \end{array}\right] \leftarrow \text{No Solution}
$$

$$
\left[\begin{array}{rrr|r} 1 & 0 & 0 & 8 \\\ 0 & 1 & 0 & 1 \\\ 0 & 0 & 0 & 0 \end{array}\right] \leftarrow \infty\text{ Solutions}
$$

A **rank** of an augmented matrix is how many leading entries there are in echelon form.
> If Rank = Number of rows, then the system has a unique solution.<br>
> If Rank < Number of rows, then the system has infinitely many solutions, with n-r parameters.

## Gauss-Jordan Elimination (#1.5)
---

### Reduced Echelon Form Definition
1. Matrix in echelon form 
2. Each leading entry = 1
3. All entries above a leading entry = 0

#### Examples of Reduced Echelon Form

$$
\left[\begin{array}{rrr|r} 1 & 0 & 0 & 8 \\\ 0 & 1 & 0 & 1 \\\ 0 & 0 & 1 & 7 \end{array}\right] \leftarrow \text{Reduced Echelon form}
$$

$$
\left[\begin{array}{rrrrr|r} 1 & 2 & 0 & 5 & 0 & 3 \\\ 0 & 0 & 1 & 2 & 0 & 0 \\\ 0 & 0 & 0 & 0 & 1 &1 \end{array}\right] \leftarrow \text{Reduced Echelon Form}
$$

**Notes:** notice how all leading entry of each row is equal to 1 and all entry before it equal to 0. In addition, every entry above 1 must equal to 0

#### Examples of invalid Reduced Echelon Form

$$
\left[\begin{array}{rrr|r} 1 & 2 & 0 & 8 \\\ 0 & 1 & 0 & 1 \\\ 0 & 0 & 1 & 7 \end{array}\right] \leftarrow \text{Entry 2 above 2nd leading entry (pivot point)}
$$


---
## Homogenous Systems (#1.6)
---
A **homogenous** system has all constants equal to 0.

$$
\left[\begin{array}{rrrrr|r} 1 & 0 & 0 & 0 & 0 & 0 \\\ 0 & 0 & 1 & 0 & 0 & 0 \\\ 0 & 0 & 0 & 0 & 1 &0 \end{array}\right] \leftarrow \text{Homogenous System}
$$

A homogenous system always has a `trivial solution` where 

$$
x_{1} = 1, x_{2}=0,...,x_{n}=0
$$

Any solution that doesn't equate all variables to 0, is `non-trivial`.
Consider a homogenous system of m equations in n variables, and assume that the coefficient matrix has rank r.
1. if r=n, then the system only has a trivial solution.
2. if r<n, then the system has infinitely many solutions.

> Complete book questions for practice.

### Homogenous vs Non-homogeneous
Let A be a system of equations, and let B be the associated homogeneous system. Then the general solution of A = a particular solution of A plus the general solution of B.
