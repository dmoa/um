#pragma once
#include <cmath>

namespace um
{
    float Lerp(float a, float b, float t) { return a + (b - a) * t; }
    float Perp(float m) { return -1 / m; }
    float Clamp(float n, float Lower, float Upper) { return std::max(Lower, std::min(n, Upper)); }
    float PythHypo(float SideA, float SideB) { return sqrt(SideA*SideA + SideB*SideB); }
    float PythSide(float SideB, float Hypotenuse) { return sqrt(pow(std::max(SideB, Hypotenuse), 2) - pow(std::min(SideB, Hypotenuse), 2)); }
    float SineRuleSide(float AngleA, float SideB, float AngleB) { return sin(AngleA) * SideB / sin(AngleB); }
    float SineRuleAngle(float SideA, float AngleB, float SideB) { return asin(SideA * sin(AngleB) / SideB); }
    float CosineRuleSide(float SideA, float SideB, float AngleC) { return sqrt(SideA*SideA + SideB*SideB - 2*SideA*SideB*cos(AngleC)); }
    float CosineRuleAngle(float SideA, float SideB, float SideC) { return acos((SideA*SideA + SideB*SideB - SideC*SideC) / 2 / SideA / SideB); }
}