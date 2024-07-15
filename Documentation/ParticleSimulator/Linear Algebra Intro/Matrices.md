# Matrices Definition and equality #4.1

`Defintion 4.1 Matrix`
A matrix a rectangular array of numbers:

$$
A=\left[\begin{array}{cccc}a_{11} & a_{12} & \cdots & a_{1 n} \\ a_{21} & a_{22} & \cdots & a_{2 n} \\ \vdots & \vdots & \ddots & \vdots \\ a_{m 1} & a_{m 2} & \cdots & a_{m n}\end{array}\right]
$$

where the $a_{ij}$ are scalars, called the **components** of A. The size of a matrix is defined as $m\times n$, where m is the number of rows and n is the number of columns.

`Definition 4.2 Equality`
Two matrix are **equal** iff same size and same corresponding components. 

`Defintion 4.3 Square`
A square matrix is of size $n\times n$ . 

`Definition 4.4 Row and Column vectors`
A column vector is $n\times 1$ and a row vector is $1\times n$.

# Addition #4.2
`Defintion 4.5 Addition of Matrices`
Let $A=\left[a_{i j}\right]$ and $B=\left[b_{i j}\right]$ be two $m \times n$-matrices. Then $A+B=C$ where $C$ is the $m \times n$-matrix $C=\left[c_{i j}\right]$ defined by

$$
c_{i j}=a_{i j}+b_{i j}
$$

`Definition 4.6 Zero Matrix`
$m\times n$ matrix with all entries equalling to zero. Denoted by 0.

# Scalar Multiplication #4.3
`Definition 4.12 Scalar multiplication`

If $k$ is a scalar and $A=\left[a_{i j}\right]$ is a matrix, then $k A=\left[k a_{i j}\right]$.

# Matrix Multiplication #4.4
## Matrix and vector multiplication
The product of an $m \times n$-matrix $A$ and an $n$-dimensional column vector $\mathbf{x}$ is an $m$-dimensional column vector, defined as a linear combination of the columns of $A$ as follows:

$$
A \mathbf{x}=\left[\begin{array}{cccc}
a_{11} & a_{12} & \cdots & a_{1 n} \\
a_{21} & a_{22} & \cdots & a_{2 n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m 1} & a_{m 2} & \cdots & a_{m n}
\end{array}\right]\left[\begin{array}{c}
x_1 \\
x_2 \\
\vdots \\
x_n
\end{array}\right]=x_1\left[\begin{array}{c}
a_{11} \\
a_{21} \\
\vdots \\
a_{m 1}
\end{array}\right]+x_2\left[\begin{array}{c}
a_{12} \\
a_{22} \\
\vdots \\
a_{m 2}
\end{array}\right]+\ldots+x_n\left[\begin{array}{c}
a_{1 n} \\
a_{2 n} \\
\vdots \\
a_{m n}
\end{array}\right]
$$

## Matrix Multiplication

`Definition 4.21: Matrix multiplication`
Let $A=\left[a_{i j}\right]$ be an $m \times n$-matrix, and let $B=\left[b_{j k}\right]$ be an $n \times p$-matrix. Then their product is the $m \times p$-matrix $A B=\left[c_{i k}\right]$ whose $(i, k)$-entry is defined by

$$
c_{i k}=a_{i 1} b_{1 k}+a_{i 2} b_{2 k}+\ldots+a_{i n} b_{n k} .
$$

