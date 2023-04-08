#include "pch.h"
#include "..\oop_lab4_prog\CFixedPointNumber.h"

TEST(CFixedPointNumber, EqualZero) {
	CFixedPointNumber a(0, 00);
	CFixedPointNumber b(0, 00);

	CFixedPointNumber sum = a.findSum(b);
	CFixedPointNumber substract = a.findSubstraction(b);
	CFixedPointNumber multiply = a.findMultiplication(b);
	CFixedPointNumber division = a.findDivision(b);

	EXPECT_EQ(sum.getDoubleValue(), 0);
	EXPECT_EQ(substract.getDoubleValue(), 0);
	EXPECT_EQ(multiply.getDoubleValue(), 0);
	EXPECT_EQ(division.getDoubleValue(), 0);
}

TEST(CFixedPointNumber, PositiveValues) {
	CFixedPointNumber a(2, 00);
	CFixedPointNumber b(3, 00);

	CFixedPointNumber sum = a.findSum(b);
	CFixedPointNumber substract = a.findSubstraction(b);
	CFixedPointNumber multiply = a.findMultiplication(b);
	CFixedPointNumber division = a.findDivision(b);

	EXPECT_EQ(sum.getDoubleValue(), 5);
	EXPECT_EQ(substract.getDoubleValue(), -1);
	EXPECT_EQ(multiply.getDoubleValue(), 6);
	EXPECT_EQ(division.getDoubleValue(), 0.66);
}

TEST(CFixedPointNumber, NegativeValues) {
	CFixedPointNumber a(-2, 00);
	CFixedPointNumber b(-3, 00);

	CFixedPointNumber sum = a.findSum(b);
	CFixedPointNumber substract = a.findSubstraction(b);
	CFixedPointNumber multiply = a.findMultiplication(b);
	CFixedPointNumber division = a.findDivision(b);

	EXPECT_EQ(sum.getDoubleValue(), -5);
	EXPECT_EQ(substract.getDoubleValue(), 1);
	EXPECT_EQ(multiply.getDoubleValue(), 6);
	EXPECT_EQ(division.getDoubleValue(), 0.66);
}

TEST(CFixedPointNumber, DoubleValues) {
	CFixedPointNumber a(2, 52);

	EXPECT_EQ(a.getDoubleValue(), 2.52);
}