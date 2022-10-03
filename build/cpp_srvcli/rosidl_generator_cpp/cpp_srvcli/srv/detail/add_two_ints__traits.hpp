// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_srvcli:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
#define CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

#include "cpp_srvcli/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddTwoInts_Request>()
{
  return "cpp_srvcli::srv::AddTwoInts_Request";
}

template<>
inline const char * name<cpp_srvcli::srv::AddTwoInts_Request>()
{
  return "cpp_srvcli/srv/AddTwoInts_Request";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_srvcli::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddTwoInts_Response>()
{
  return "cpp_srvcli::srv::AddTwoInts_Response";
}

template<>
inline const char * name<cpp_srvcli::srv::AddTwoInts_Response>()
{
  return "cpp_srvcli/srv/AddTwoInts_Response";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_srvcli::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddTwoInts>()
{
  return "cpp_srvcli::srv::AddTwoInts";
}

template<>
inline const char * name<cpp_srvcli::srv::AddTwoInts>()
{
  return "cpp_srvcli/srv/AddTwoInts";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_srvcli::srv::AddTwoInts_Request>::value &&
    has_fixed_size<cpp_srvcli::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_srvcli::srv::AddTwoInts_Request>::value &&
    has_bounded_size<cpp_srvcli::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<cpp_srvcli::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_srvcli::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_srvcli::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
