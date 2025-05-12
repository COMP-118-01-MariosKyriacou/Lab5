#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5UnitTesting
{
	TEST_CLASS(Lab5UnitTesting)
	{
	public:
		
		// Used to test the function sumOfRows
		TEST_METHOD(SumOfRowsTest) {
			// Arrange
			const double matrix[3][Globals::MAX_COL] = { {1, 2, 3}, {6, 7, 8}, {11, 12, 13} };
			int maxRow = 3, row = 1;

			// Act
			double result = sumOfRow(matrix, row, maxRow);

			// Assert
			Assert::AreEqual(21.0, result);
		}

		// Used to test the function averageOfElements
		TEST_METHOD(AverageOfElementsTest) {
			// Arrange
			const double matrix[3][Globals::MAX_COL] = { {1, 2, 3}, {6, 7, 8}, {11, 12, 13} };
			int maxRow = 3, row = 1;

			// Act
			double result = averageOfElements(matrix, maxRow);

			// Assert
			Assert::AreNotEqual(0.0, result);
			Assert::AreEqual(7.0, result);
		}

		// Used to test the function transposedMatrix
		TEST_METHOD(TransposedMatrixTest) {
			// Arrange
			const double matrix[3][Globals::MAX_COL] = { {1, 2, 3}, {6, 7, 8}, {11, 12, 13} };
			double newMatrix[3][Globals::MAX_COL];
			int maxRow = 3, row = 1;
			
			// Act
			transposedMatrix(matrix, newMatrix, maxRow);

			// Assert
			Assert::IsNotNull(newMatrix);
			Assert::AreEqual(1.0, newMatrix[0][0]);
			Assert::AreEqual(2.0, newMatrix[1][0]);
			Assert::AreEqual(3.0, newMatrix[2][0]);
			Assert::AreEqual(6.0, newMatrix[0][1]);
			Assert::AreEqual(7.0, newMatrix[1][1]);
			Assert::AreEqual(8.0, newMatrix[2][1]);
			Assert::AreEqual(11.0, newMatrix[0][2]);
			Assert::AreEqual(12.0, newMatrix[1][2]);
			Assert::AreEqual(13.0, newMatrix[2][2]);
		}
	};
}
