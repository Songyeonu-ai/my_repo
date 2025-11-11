// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from humanoid_interfaces:msg/HumanPjVision.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__TRAITS_HPP_
#define HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "humanoid_interfaces/msg/detail/human_pj_vision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace humanoid_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanPjVision & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanPjVision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanPjVision & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace humanoid_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_interfaces::msg::HumanPjVision & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_interfaces::msg::HumanPjVision & msg)
{
  return humanoid_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_interfaces::msg::HumanPjVision>()
{
  return "humanoid_interfaces::msg::HumanPjVision";
}

template<>
inline const char * name<humanoid_interfaces::msg::HumanPjVision>()
{
  return "humanoid_interfaces/msg/HumanPjVision";
}

template<>
struct has_fixed_size<humanoid_interfaces::msg::HumanPjVision>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<humanoid_interfaces::msg::HumanPjVision>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<humanoid_interfaces::msg::HumanPjVision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__TRAITS_HPP_
