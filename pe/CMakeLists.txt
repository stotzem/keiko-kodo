macro(add_pe NUM)
    add_executable(pe-${NUM} ${NUM}.cpp)
endmacro()

add_pe(0001)
add_pe(0002)
add_pe(0003)