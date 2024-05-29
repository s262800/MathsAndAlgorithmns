#pragma once
#include "Vector.h"


class Matrix
{
public:
    //this is a 3 x 3

    float Data[3][3];

    float Determinate();

    float xRotationData[3][3];
    float yRotationData[3][3];
    float zRotationData[3][3];

    void SetRotateAroundX(float Angle);
    void SetRotateAroundY(float Angle);
    void SetRotateAroundZ(float Angle);


    Vector RotateAroundX(Vector Point, float Angle);
    Vector RotateAroundY(Vector Point, float Angle);
    Vector RotateAroundZ(Vector Point, float Angle);

    Matrix operator* (Matrix& RHS)
    {
        Matrix& LHS = *this;
        Matrix resultMat;

        resultMat.Data[0][0] = LHS.Data[0][0] * RHS.Data[0][0] + LHS.Data[0][1] * RHS.Data[0][0] + LHS.Data[0][2] * RHS.Data[0][0];
        resultMat.Data[0][1] = LHS.Data[0][0] * RHS.Data[0][1] + LHS.Data[0][1] * RHS.Data[0][1] + LHS.Data[0][2] * RHS.Data[0][1];
        resultMat.Data[0][2] = LHS.Data[0][0] * RHS.Data[0][2] + LHS.Data[0][1] * RHS.Data[0][2] + LHS.Data[0][2] * RHS.Data[0][2];

        resultMat.Data[1][0] = LHS.Data[1][0] * RHS.Data[1][0] + LHS.Data[1][1] * RHS.Data[1][0] + LHS.Data[1][2] * RHS.Data[1][0];
        resultMat.Data[1][1] = LHS.Data[1][0] * RHS.Data[1][1] + LHS.Data[1][1] * RHS.Data[1][1] + LHS.Data[1][2] * RHS.Data[1][1];
        resultMat.Data[1][2] = LHS.Data[1][0] * RHS.Data[1][2] + LHS.Data[1][1] * RHS.Data[1][2] + LHS.Data[1][2] * RHS.Data[1][2];

        resultMat.Data[2][0] = LHS.Data[2][0] * RHS.Data[2][0] + LHS.Data[2][1] * RHS.Data[2][1] + LHS.Data[2][2] * RHS.Data[2][1];
        resultMat.Data[2][1] = LHS.Data[2][1] * RHS.Data[2][1] + LHS.Data[2][1] * RHS.Data[2][1] + LHS.Data[2][2] * RHS.Data[2][1];
        resultMat.Data[2][2] = LHS.Data[2][1] * RHS.Data[2][2] + LHS.Data[2][1] * RHS.Data[2][2] + LHS.Data[2][2] * RHS.Data[2][2];

        return resultMat;
    }

    Vector operator* (Vector& RHS)
    {
        Matrix& LHS = *this;
        Vector resultVec;

        resultVec.x = LHS.Data[0][0] * RHS.x + LHS.Data[0][1] * RHS.x + LHS.Data[0][2] * RHS.x;
        resultVec.y = LHS.Data[1][0] * RHS.y + LHS.Data[1][1] * RHS.y + LHS.Data[1][2] * RHS.y;
        resultVec.z = LHS.Data[2][0] * RHS.z + LHS.Data[2][1] * RHS.z + LHS.Data[2][2] * RHS.z;

        return resultVec;
    }

};

