# Vectors in $\mathbb{R}^{n}$ #2.1
A **Vector** describes an offset (from origin) or distance, and direction. Usually viewed as an array starting from the location *tail* and ending in another *tip*.

Two vectors are equal iff they have both the same direction and distance.
**u** = **v** iff $u_{1} = v_{1}$, $u_{2}=v_{2}$

$$ 
\mathbf{v}=\left[\begin{array}{l}4 \\ 3\end{array}\right] \to [4, 3]^{T}
$$

A vector with all components equaling 0 is called the zero vector and is written as <u>0</u>.

> Definition 
An n-dimensional vector is an ordered list of n real numbers written as a column in brackets.
We write $\mathbb{R}^{n}$ for the **n-dimensional Euclidean space**.

Vectors are often denoted by lower-case letters such as v, w, a, b

Vectors can be derived from points, for example, a vector from point Q to P can be denoted as $\vec{QP}$ .

> Definition: The position vector of a point.
> Let P be a point in n-dimensional space. The position vector of P is the vector $p=\vec{0P}$ whose tail is the origin and whose tip is at P. Where the coordinates of a point are the same as the components of its position vector. Thus sometimes, referred to as a **coordinate vector**.

# Addition and Subtraction #2.2

For vectors $\mathbf{u}=\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right], \mathbf{v}=\left[\begin{array}{c}v_1 \\ \vdots \\ v_n\end{array}\right] \in \mathbb{R}^n$ , the sum $\mathbf{u}+\mathbf{v} \in \mathbb{R}^n$ is defined by

$$
\mathbf{u}+\mathbf{v}=\left[\begin{array}{c}
u_1 \\
\vdots \\
u_n
\end{array}\right]+\left[\begin{array}{c}
v_1 \\
\vdots \\
v_n
\end{array}\right]=\left[\begin{array}{c}
u_1+v_1 \\
\vdots \\
u_n+v_n
\end{array}\right]
$$

The same applies to subtraction, since a negative vector **u**, just has its tail and tip swapped. 

> Properties of vector addition
> The commutative law of addition u + v = v + u
> The associative law of addition (u + v) + w = u + (v + w)
> The existence of an additive unit u + 0 = u
> The existence of an additive inverse u + (-u) = 0


# Scalar multiplication #2.3

$$
\text{If } k \in \mathbb{R} \text{ is a scalar and } u \in \mathbb{R}^{n} \text{ is a vector, then their scalar multiplication }ku\in\mathbb{R}^{n} \text{ is defined by:}\
k \mathbf{u}=k\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right]=\left[\begin{array}{c}k u_1 \\ \vdots \\ k u_n\end{array}\right]
$$

> Properties 2.11
> The distributive law over vector addition: k(u + v) = ku + kv
> The distribute law over scalar addition (k + l)u = ku + lu
> The associative law for scalar multiplication k(lu) = (kl)u.
> The rule for multiplication by 1 1u = u.

# Linear Combinations #2.4
A vector **v** is said to be a linear combination of the vectors $u_{1},...,u_{n}$, if there exist scalars $a_{1},...a_{n}$ such that:

$$
v = a_{1}u_{1}+...+a_{n}u_{n}
$$

The numbers $a_{1},...,a_{n}$ are called the coefficients of the linear combination.
