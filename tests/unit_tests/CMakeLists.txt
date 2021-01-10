if (TESTS_REQUIRED)
  enable_testing()

  find_package(GTest REQUIRED)

  set(PROJECT_TEST_NAME ${PROJECT_NAME}_test)

  add_executable(${PROJECT_TEST_NAME} "")
  target_sources(${PROJECT_TEST_NAME}
    PRIVATE
    ${PROJECT_SOURCE_DIR}/src/foo.cpp
      SomeTest.cpp
  )

  target_compile_options( ${PROJECT_TEST_NAME} PRIVATE -O3 )

  target_link_libraries( ${PROJECT_NAME}_test
    PUBLIC
    GTest::GTest
    gtest_main  
  )

  add_test(NAME ${PROJECT_TEST_NAME} COMMAND ${PROJECT_TEST_NAME})
endif()
