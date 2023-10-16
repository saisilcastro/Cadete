cmake_minimum_required(VERSION 2.4)

# Settings:
set(CTEST_DASHBOARD_ROOT                "/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Tests/CTestTest")
set(CTEST_SITE                          "mister-coder-lan")
set(CTEST_BUILD_NAME                    "CTestTest-Linux-g++-Parallel")

set(CTEST_SOURCE_DIRECTORY              "/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Tests/CTestTestParallel")
set(CTEST_BINARY_DIRECTORY              "/home/mister-coder/Documents/Cadete/level_2/cub3D/cmake-3.20.0/Tests/CTestTestParallel")
set(CTEST_CVS_COMMAND                   "")
set(CTEST_CMAKE_GENERATOR               "Unix Makefiles")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
set(CTEST_COVERAGE_COMMAND              "/usr/bin/gcov")
set(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

#CTEST_EMPTY_BINARY_DIRECTORY(${CTEST_BINARY_DIRECTORY})

CTEST_START(Experimental)
CTEST_CONFIGURE(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_BUILD(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_TEST(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res PARALLEL_LEVEL 4)
