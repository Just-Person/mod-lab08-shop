// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <ctime>
#include "market.h"
TEST(TEST1, TrueOrFalse) {
srand(time(nullptr));
Supermarket* supermarket = new Supermarket(20, 40, 500, 5, 20, 1);
EXPECT_EQ(static_cast<int> (supermarket->RelativeThroughput()), text.getprefix());
}
