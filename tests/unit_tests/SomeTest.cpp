#include "gtest/gtest.h"
#include "../../src/foo.h"

TEST(SomeTestSuite, SomeTest) {
  Foo* obj = new Foo();
  obj->set_the_value(5);
  ASSERT_EQ(obj->get_the_value(), 5);
  delete obj;
}