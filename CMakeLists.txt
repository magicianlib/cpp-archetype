cmake_minimum_required(VERSION 3.28)
project(cpp_archetype)

set(CMAKE_CXX_STANDARD 20)

# 设置源文件
set(SOURCES
        src/main.cpp
        src/work.cpp
        src/my_singleton.cpp)

# 使用 glob 表达式
# 递归筛选 include 目录下的 .h/.hpp 文件
file(GLOB_RECURSE HEAD_FILES "include/**.h" "include/**.hpp")

# 替换掉 ${CMAKE_SOURCE_DIR} 前缀
string(REPLACE "${CMAKE_SOURCE_DIR}/" "" HEAD_FILES "${HEAD_FILES}")

# 输出 include 的头文件
message("include header:")
foreach (header ${HEAD_FILES})
    message("  ..${header}")
endforeach ()


# 创建可执行文件
add_executable(cpp_archetype ${SOURCES})

target_include_directories(cpp_archetype PRIVATE ${CMAKE_SOURCE_DIR}/include)


