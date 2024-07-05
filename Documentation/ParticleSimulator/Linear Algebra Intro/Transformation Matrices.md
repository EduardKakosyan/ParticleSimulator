A [Vector](Vectors.md) with a structure of $(x, y, z, w)$ where $w$ is a boolean value:

```python
if w===1:
	(x, y, z, 1) = position in space
else: 
	(x, y, z, 0 ) = direction
```

This is important for translation (moving a point in a certain direction).

