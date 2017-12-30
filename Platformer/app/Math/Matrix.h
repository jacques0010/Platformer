#pragma once
#include "MathConst.h"
#include <math.h>
#include "Vector.h"

namespace Mastermind
{
	namespace Math
	{
		class Matrix4f
		{
		private:
			float m_Matrix4f[4 * 4];
		private:
			Matrix4f();
			~Matrix4f();
			Matrix4f multiply(Matrix4f input);
		public:
			Matrix4f identityMatrix();
			Matrix4f transformationMatrix(Vec3f vector);
			Matrix4f rotationMatrixR(float rad);
			Matrix4f rotationMatrixD(float degrees);
			Matrix4f operator *(Matrix4f input);
		};
	}
}