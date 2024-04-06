enable_testing()

include_directories(
   ${PROJECT_SOURCE_DIR}/src/aplusb
)

add_executable(
    deep_thought_test
    deep_thought_test.cpp
)

target_link_libraries(
    deep_thought_test
    GTest::gtest_main
)

target_link_libraries(
    deep_thought_test
    deep_thought
)

include(GoogleTest)
gtest_discover_tests(deep_thought_test)