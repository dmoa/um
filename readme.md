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
float PythHypo(float SideA, float SideB);

// Calculates the shorter side of a right triangle.
float PythSide(float SideB, float Hypotenuse);

// Calculates the side opposite angle a in any triangle.
float SineRuleSide(float AngleA, float SideB, float AngleB);

// Calculates the angle opposite side a in any triangle.
float SineRuleAngle(float SideA, float AngleB, float SideB);

// Calculates the side opposite angle c in any triangle.
float CosineRuleSide(float SideA, float SideB, float AngleC);

// Calculates the angle opposite side c in any triangle.
float CosineRuleAngle(float SideA, float SideB, float SideC);
```