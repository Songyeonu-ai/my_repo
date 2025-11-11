// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from humanoid_interfaces:msg/HumanPjVision.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__BUILDER_HPP_
#define HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "humanoid_interfaces/msg/detail/human_pj_vision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace humanoid_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanPjVision_flag
{
public:
  explicit Init_HumanPjVision_flag(::humanoid_interfaces::msg::HumanPjVision & msg)
  : msg_(msg)
  {}
  ::humanoid_interfaces::msg::HumanPjVision flag(::humanoid_interfaces::msg::HumanPjVision::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_interfaces::msg::HumanPjVision msg_;
};

class Init_HumanPjVision_header
{
public:
  Init_HumanPjVision_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanPjVision_flag header(::humanoid_interfaces::msg::HumanPjVision::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanPjVision_flag(msg_);
  }

private:
  ::humanoid_interfaces::msg::HumanPjVision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_interfaces::msg::HumanPjVision>()
{
  return humanoid_interfaces::msg::builder::Init_HumanPjVision_header();
}

}  // namespace humanoid_interfaces

#endif  // HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__BUILDER_HPP_
