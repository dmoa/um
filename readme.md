## Useful Math Library

This is a C++ math library extending the features of cmath.

# Documentation
```c++
// Classic lerp function.
float lerp(float a, float b, float t);
// Finds the perpendicular gradient of a line.
float perp(float m);
// Classic clip function limiting the max and min values of a number.
float clamp(float n, float lower, float upper);
// Calculates the hypotenuse of a right triangle.
float pyth(float a, float b);
// Calculates a shorter side of a right triangle.
float pyth_s(float b, float c);
// Calculates the missing side of a triangle using the sine rule.
float SineRuleSide(float AngleA, float SideB, float AngleB)
```