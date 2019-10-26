#
# project: spstructure tests
#
cmake_minimum_required(VERSION 2.8)
get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

include_directories(src) 
project(SPStructures-tests)
fips_setup()
# fips_project(fips-SPStructures)
fips_add_subdirectory(src)
# fips_deps(unittestpp)
# enable_testing()
fips_finish()


