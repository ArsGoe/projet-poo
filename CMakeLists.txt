# A Cmake file for lab 01
# Adapted from the 2025-2026 edition of the course
# C. W. Royer, September 2026

cmake_minimum_required(VERSION 3.13)

# give a name to the project
project(lab01)

# collect all cpp files (sometimes considered as bad practice)
file(GLOB_RECURSE src_files_list src/*.cpp)

# for each sample file, make an exe
foreach(src_file ${src_files_list})

    get_filename_component(file_exe ${src_file} NAME_WE)    # define the name of the app (filename Without Extension)
    add_executable(${file_exe} ${src_file})                 # file to compile and name of the app
    target_compile_features(${file_exe} PRIVATE cxx_std_11) # use at least c++ 11
    if (MSVC) # MSVC = Microsoft Visual C++ compiler
        target_compile_options(${file_exe} PRIVATE /W3)
    else()
        target_compile_options(${file_exe} PRIVATE -Wall -Wextra -Wpedantic -pedantic-errors)
    endif()

    message(STATUS "src file  " ${src_file})
    message(STATUS "exe file  " ${file_exe})

endforeach()




 
