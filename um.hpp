#pragma once
#include <cmath>

namespace um
{
    float Lerp(float a, float b, float t) { return a + (b - a) * t; }
    float Perp(float m) { return -1 / m; }
    float Clamp(float n, float Lower, float Upper) { return std::max(Lower, std::min(n, Upper)); }
    float Pyth(float a, float b) { return sqrt(a*a + b*b); }
    float PythS(float b, float c) { return sqrt(pow(std::max(b, c), 2) - pow(std::min(b, c), 2)); }
    float SineRuleSide(float AngleA, float SideB, float AngleB) { return sin(AngleA) * SideB / sin(AngleB); }
    float SineRuleAngle(float SideA, float AngleB, float SideB) { return asin(SideA * sin(AngleB) / SideB); }
}