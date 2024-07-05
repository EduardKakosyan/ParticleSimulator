# Vectors in $\mathbb{R}^{n}$ #2.1
A **Vector** describes an offset (from origin) or distance, and direction. Usually viewed as an array starting from the location *tail* and ending in another *tip*.

Two vectors are equal iff they have both the same direction and distance.
**u** = **v** iff $u_{1} = v_{1}$, $u_{2}=v_{2}$

$$ 
\mathbf{v}=\left[\begin{array}{l}4 \\ 3\end{array}\right] \to [4, 3]^{T}
$$

A vector with all components equaling 0 is called the zero vector and is written as <u>0</u>.

> Definition <br>
An n-dimensional vector is an ordered list of n real numbers written as a column in brackets.
We write $\mathbb{R}^{n}$ for the **n-dimensional Euclidean space**.

Vectors are often denoted by lower-case letters such as v, w, a, b

Vectors can be derived from points, for example, a vector from point Q to P can be denoted as 
$\vec{QP}$ .

> Definition: The position vector of a point.<br>
> Let P be a point in n-dimensional space. The position vector of P is the vector $p=\vec{0P}$ whose tail is the origin and whose tip is at P. Where the coordinates of a point are the same as the components of its position vector. Thus sometimes, referred to as a **coordinate vector**.

# Addition and Subtraction #2.2

For vectors 

$$
\mathbf{u}=\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right], \mathbf{v}=\left[\begin{array}{c}v_1 \\ \vdots \\ v_n\end{array}\right] \in \mathbb{R}^n
$$ 

, the sum $\mathbf{u}+\mathbf{v} \in \mathbb{R}^n$ is defined by

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

> Properties of vector addition<br>
> The commutative law of addition u + v = v + u<br>
> The associative law of addition (u + v) + w = u + (v + w)<br>
> The existence of an additive unit u + 0 = u<br>
> The existence of an additive inverse u + (-u) = 0<br>


# Scalar multiplication #2.3

$$
\text{If } k \in \mathbb{R} \text{ is a scalar and } u \in \mathbb{R}^{n} \text{ is a vector, then their scalar multiplication }ku\in\mathbb{R}^{n} \text{ is defined by:}\
k \mathbf{u}=k\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right]=\left[\begin{array}{c}k u_1 \\ \vdots \\ k u_n\end{array}\right]
$$

> Properties 2.11<br>
> The distributive law over vector addition: k(u + v) = ku + kv<br>
> The distribute law over scalar addition (k + l)u = ku + lu<br>
> The associative law for scalar multiplication k(lu) = (kl)u.<br>
> The rule for multiplication by 1 1u = u.<br>

# Linear Combinations #2.4
A vector **v** is said to be a linear combination of the vectors $u_{1},...,u_{n}$, if there exist scalars $a_{1},...a_{n}$ such that:

$$
v = a_{1}u_{1}+...+a_{n}u_{n}
$$

The numbers $a_{1},...,a_{n}$ are called the coefficients of the linear combination.

# Length of a vector #2.5

Distance between points in $\mathbb{R}^{n}$ can be found using the following definition:

Let $P = (p_{1}, ..., p_{n})$ and $Q=(q_{1},..., q_{n})$ be two points in $\mathbb{R}^{n}$ . Then the distance between these points is defined as:

$$
d(P,Q)=\sqrt{(p_{1}-q_{1})^{2}+...+(p_{n}-q_{n})^{2}}
$$

This formula is also called the distance formula. We may also write $|PQ|$ for the distance between p and Q.

Let 

$$
\mathbf{u}=\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right]
$$

be a vector in $\mathbb{R}^{n}$. Then the **length** of u, written $\| x \|$ is given by:

$$
\|u\|=\sqrt{u_{1}^{2}+...u_{n}^{2}}
$$

The length of a vector is also sometimes called its **magnitude** or its **norm**.

> Properties of length<br>
> $\|u\| \le 0$<br>
> $\|u\| = 0$ iff **u = 0**.<br>
> $\|ku\| = |k|\|u\|$<br>

A vector with length one in $\mathbb{R}^{n}$ is called a **unit vector**.

# The dot product #2.6

Let 

$$
\mathbf{u}=\left[\begin{array}{c}u_1 \\ \vdots \\ u_n\end{array}\right]
$$ 

and 

$$
\mathbf{v}=\left[\begin{array}{c}v_1 \\ \vdots \\ v_n\end{array}\right]
$$ 

be two vectors in $\mathbb{R}^{n}$. 
We define their dot product as $u \cdot v=u_{1}v_{1}+...+u_{n}v_{n}$

The dot product is also called the **scalar product**.

> Properties of dot <br>
> $u\cdot v=v\cdot u$<br>
> $u\cdot u \ge 0$ and $u\cdot u = 0$ iff $u=0$<br>
> $(ku + kl) \cdot w$ = $k(u\cdot w) + l(v\cdot w)$<br>
> $u\cdot(kv+lw)=k(u\cdot v)+l(u\cdot w)$<br>
> $u\cdot u = \|u\|^{2}$<br>

## Cauchy-Schwarz inequality

The dot product satisfies

$|u\cdot v|\le\|u\|\|v\|$ however, it is only obtained only if one of u or v is a scalar multiple of the other.

Triangle inequality follows the same principle:

$$
\|u+v\|\le\|u\|+\|v\|
$$
![Triangle Inequality](IMAGES/traingle_inequality.png)

## Geometric use of the dot product
The included angle between u and v is the angle $\theta$ such that $0\le\theta\le\pi$.
Let u and v be two vectors in $\mathbb{R}^{n}$, and let $\theta$ be the included angle:

$$
u\cdot v = \|u\|\|v\|cos\theta
$$


## Orthogonal Vectors
Two non-zero vectors are said to be **orthogonal** (**perpendicular**) if the included angle is $\frac{\pi}{2}$ radians. Therefore u and v are orthogonal iff $u\cdot v=0$
We also can write $u\bot v$ to indicate they are orthogonal. 

## Projections
![Projection](Images/Projection.png)

u → non-zero vector specifying a direction<br>
v → any vector<br>
Q → The tip point of **v**<br>
P → The point along **u** closest to **Q**<br>

> The distance from 0 to P is called the **component** of **v** in the direction of **u** $\text{comp}_{u}v$
> The vector $\vec{0P}$ is called the **projection** of **v** onto **u** $\text{proj}_{u}v$ 

$$
\text{comp}_{u}(v)=|0P|=\frac{u\cdot v}{\|u\|}
$$

$$
\text{proj}_{u}{(v)}=\vec{0P}=\frac{u\cdot{v}}{\|u\|^{2}}u
$$

# The cross product #2.7
It can only be defined in $\mathbb{R}^{3}$ utilizing the right-hand rule. 
