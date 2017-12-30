#include "Matrix.h"

namespace Mastermind
{
	namespace Math
	{
		Matrix4f::Matrix4f()
		{
			for (int i = 0; i < 4 * 4; i++)
			{
				m_Matrix4f[i] = 0;
			}
		}
		Matrix4f::~Matrix4f()
		{

		}
		Matrix4f Matrix4f::identityMatrix()
		{
			Matrix4f result;
			result.m_Matrix4f[0 + 0 * 4] = 1;
			result.m_Matrix4f[1 + 1 * 4] = 1;
			result.m_Matrix4f[2 + 2 * 4] = 1;
			result.m_Matrix4f[3 + 3 * 4] = 1;
			return result;
		}

		Matrix4f Matrix4f::transformationMatrix(Vec3f vector)
		{
			Matrix4f result = identityMatrix();
			result.m_Matrix4f[0 + 3 * 4];
			result.m_Matrix4f[1 + 3 * 4];
			result.m_Matrix4f[2 + 3 * 4];
			return result;
		}

		Matrix4f Matrix4f::rotationMatrixR(float rad)
		{
			float cVal = cos(rad);
			float sVal = sin(rad);

			Matrix4f result = identityMatrix();

			result.m_Matrix4f[0 + 0 * 4] = cVal;
			result.m_Matrix4f[0 + 1 * 4] = -sVal;
			result.m_Matrix4f[1 + 0 * 4] = sVal;
			result.m_Matrix4f[1 + 1 * 4] = cVal;

			return result;
		}
		Matrix4f Matrix4f::rotationMatrixD(float degrees)
		{
			float radVal = (PI / 180) * degrees;
			return rotationMatrixR(radVal);
		}
	}
}