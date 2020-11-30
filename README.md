# Computer-Graphics


## Description

A list of OpenGL programs using programming language C to demonstrate concepts of Computer Graphics. OpenGL (Open Graphics Library) is the computer industry's standard API for defining 2-D and 3-D graphic images. 


## Configuration in Linux

Open up a terminal and run these commands

```
$ sudo apt-get upgrade && sudo apt-get update
$ sudo apt-get install freeglut3
$ sudo apt-get install freeglut3-dev
```
For compilation and execution
```
$ gcc 'file-name.c' -o 'file-name' -lGL -lglut -lGLU
$ ./'file-name'
```

## What's Included

### [Basics](/Basics)

- OpenGL Geometric Primitives
- Scenery using keyboard and mouse events
- First program - Triangle 

### [Line-Drawing-Algorithms](/Line-Drawing-Algorithms)

- Line using equation of line Y=m*X+C
- Line using DDA (Digital Differential Analyzer) Algorithm
- Line using Bresenham’s Line Algorithm 

### [Circle-and-Ellipse](/Circle-and-Ellipse)

- Circle using Polar Equations
- Circle using Mid-Point Algorithm
- Ellipse using Mid-Point Algorithm 

### [Clipping-Algorithms](/Clipping-Algorithms)

- Cohen Sutherland Line-Clipping algorithm
- Sutherland Hodgeman Polygon-Clipping algorithm

### [Area-Filling-Algorithms](/Area-Filling-Algorithms)

- Boundary Fill Algorithm
- Flood Fill Algorithm

### [2D Transformations](/2D%20Transformations)

- Translation
- Rotation (with respect to arbitrary point also)
- Scaling (with respect to arbitrary point also)
- Reflection about x-axis, y-axis, y=x, y=-x and origin
- Reflection about a line Y=mX+c 
- Shearing about x-axis and y-axis

### [3D Transformations](/3D%20Transformations)

- Translation
- Rotation about X, Y and Z axis
- Scaling 
- Reflection about XY, YZ and ZX plane
- Shearing about X, Y and Z axis
