cmake_minimum_required(VERSION 3.5)
project(cpp_srvcli)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(include)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED) # NEEDED FOR MSG SRV

# DEFINE MSG SRV
# set(msg_files
#   "msg/Message1.msg"
#   "msg/Message2.msg"
#   # etc
# )
set(srv_files
  "srv/AddTwoInts.srv"
   # etc
)

# GENERATE MSG SRV INTERFACES
rosidl_generate_interfaces(${PROJECT_NAME}
  # ${msg_files}
  ${srv_files}
)

# GENERATE MSG SRV EXPORT DEPENDENCIES
ament_export_dependencies(rosidl_default_runtime)

add_executable(server src/add_two_ints_server.cpp)
ament_target_dependencies(server rclcpp)
rosidl_target_interfaces(server ${PROJECT_NAME} rosidl_typesupport_cpp) # IF MSG IS INSIDE SAME DIRECTORY

install(TARGETS
  server
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
