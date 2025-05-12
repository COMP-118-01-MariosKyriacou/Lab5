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
			for (int i = 0; i < maxRow; i++) {
				for (int j = 0; j < Globals::MAX_COL; j++) {
					Assert::AreEqual(matrix[j][i], newMatrix[i][j]);
				}
			}
		}

		// Used to test the function findLargest which finds the largest number in the matrix
		TEST_METHOD(FindLargestTest) {
			// Arrange
			const double matrix[3][Globals::MAX_COL] = { {1, 2, 3}, {6, 7, 8}, {11, 12, 13} };
			const int maxRow = 3;

			// Act
			double result = findLargest(matrix[1], maxRow);

			// Assert
			Assert::AreNotEqual(7.0, result);
			Assert::AreEqual(8.0, result);
		}
	};
}
