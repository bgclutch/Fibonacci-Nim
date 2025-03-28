cmake_minimum_required(VERSION 3.11)
project(fibnim)
add_executable(fibnim)

target_include_directories(fibnim PUBLIC ${PROJECT_SOURCE_DIR}/inc)

target_sources(fibnim PRIVATE
    src/next_turn.c
    src/main.c
)

target_compile_options(fibnim PRIVATE
    $<$<CONFIG:DEBUG>:
        -Wall
        -Wextra
        -Wpedantic
        -g
        -O0
        -DDEBUG
        -Wmissing-declarations
        -Wcast-align
        -Wunused
        -Wshadow
        -Wsign-conversion
        -fsanitize=address>
)

set_property(TARGET fibnim PROPERTY C_STANDARD 99)

target_link_options(fibnim PRIVATE
    $<$<CONFIG:Debug>:-fsanitize=address>
)