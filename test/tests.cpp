// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(CheckPrimeTest, PrimeNumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(23));
}

TEST(CheckPrimeTest, NonPrimeNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(8));
  EXPECT_FALSE(checkPrime(10));
  EXPECT_FALSE(checkPrime(15));
}

TEST(NthPrimeTest, FirstPrime) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(NthPrimeTest, FifthPrime) {
  EXPECT_EQ(nPrime(5), 11);
}

TEST(NthPrimeTest, TwelfthPrime) {
  EXPECT_EQ(nPrime(12), 37);
}

TEST(NextPrimeTest, After3) {
  EXPECT_EQ(nextPrime(3), 5);
}

TEST(NextPrimeTest, After15) {
  EXPECT_EQ(nextPrime(15), 17);
}

TEST(NextPrimeTest, After23) {
  EXPECT_EQ(nextPrime(23), 29);
}

TEST(SumPrimeTest, SumBelow15) {
  EXPECT_EQ(sumPrime(15), 41);
}

TEST(SumPrimeTest, SumBelow30) {
  EXPECT_EQ(sumPrime(30), 129);
}
