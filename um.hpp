#pragma once
#include <cmath>

namespace um
{
    float Lerp(float a, float b, float t) { return a + (b - a) * t; }
    float Perp(float m) { return -1 / m; }
    float Clamp(float n, float Lower, float Upper) { return std::max(Lower, std::min(n, Upper)); }
    float PythGetHypo(float SideA, float SideB) { return sqrt(SideA*SideA + SideB*SideB); }
    float PythGetSide(float SideB, float Hypotenuse) { return sqrt(pow(std::max(SideB, Hypotenuse), 2) - pow(std::min(SideB, Hypotenuse), 2)); }
    float SineRuleGetSide(float AngleA, float SideB, float AngleB) { return sin(AngleA) * SideB / sin(AngleB); }
    float SineRuleGetAngle(float SideA, float AngleB, float SideB) { return asin(SideA * sin(AngleB) / SideB); }
    float CosineRuleGetSide(float SideA, float SideB, float AngleC) { return sqrt(SideA*SideA + SideB*SideB - 2*SideA*SideB*cos(AngleC)); }
    float CosineRuleGetAngle(float SideA, float SideB, float SideC) { return acos((SideA*SideA + SideB*SideB - SideC*SideC) / 2 / SideA / SideB); }
    float GetAngleFromVectors(std::vector<std::vector> Vectors)
    {
        float value = 0;
        for (int i = 0; i < Vectors[0].size(); i++)
        {
            float product = 1;
            for (int j = 0; j < Vectors.size(); j++)
            {
                product *= Vectors[0];
            }
            value += product;
        }
        for (i = 0; i < Vectors.size(); i++)
        {
            for (j = 0; j < Vectors[0].size(); j++)
            {
                Vectors[i][j] *= Vectors[i][j]
            }
            float magnitude = std::accumulate(Vectors[i].begin(), Vectors[j].end(), 0);
            value *= 1 / (magnitude)
        }
        return value;
    }
}