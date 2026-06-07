add_executable(TestBuild main.cpp)
target_link_libraries(TestBuild PRIVATE
 ${LIB_NAME}
 nlohmann_json

)

