
add_executable(${PROJECT_NAME}
    main.cpp)

link_directories(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(${PROJECT_NAME} sort)

include_directories(${PROJECT_NAME} ${INCLUDE_DIR})

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})