add_library(sort
mergeSort.hpp
mergeSort.cpp
)

set_target_properties(sort PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${LIBRARY_DIR})
