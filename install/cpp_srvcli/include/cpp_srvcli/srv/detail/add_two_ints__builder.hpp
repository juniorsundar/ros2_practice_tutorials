// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_srvcli:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include "cpp_srvcli/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_srvcli
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::cpp_srvcli::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::cpp_srvcli::srv::AddTwoInts_Request b(::cpp_srvcli::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_srvcli::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::cpp_srvcli::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::cpp_srvcli::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_srvcli::srv::AddTwoInts_Request>()
{
  return cpp_srvcli::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace cpp_srvcli


namespace cpp_srvcli
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_srvcli::srv::AddTwoInts_Response sum(::cpp_srvcli::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_srvcli::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_srvcli::srv::AddTwoInts_Response>()
{
  return cpp_srvcli::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace cpp_srvcli

#endif  // CPP_SRVCLI__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
