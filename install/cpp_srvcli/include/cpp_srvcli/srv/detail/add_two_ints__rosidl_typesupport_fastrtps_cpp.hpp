// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from cpp_srvcli:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_srvcli/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "cpp_srvcli/srv/detail/add_two_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace cpp_srvcli
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_serialize(
  const cpp_srvcli::srv::AddTwoInts_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cpp_srvcli::srv::AddTwoInts_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
get_serialized_size(
  const cpp_srvcli::srv::AddTwoInts_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
max_serialized_size_AddTwoInts_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cpp_srvcli

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_srvcli, srv, AddTwoInts_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "cpp_srvcli/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "cpp_srvcli/srv/detail/add_two_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace cpp_srvcli
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_serialize(
  const cpp_srvcli::srv::AddTwoInts_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cpp_srvcli::srv::AddTwoInts_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
get_serialized_size(
  const cpp_srvcli::srv::AddTwoInts_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
max_serialized_size_AddTwoInts_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cpp_srvcli

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_srvcli, srv, AddTwoInts_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "cpp_srvcli/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_srvcli, srv, AddTwoInts)();

#ifdef __cplusplus
}
#endif

#endif  // CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
