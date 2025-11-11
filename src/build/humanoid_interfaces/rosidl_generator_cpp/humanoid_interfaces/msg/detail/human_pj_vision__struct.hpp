// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from humanoid_interfaces:msg/HumanPjVision.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_HPP_
#define HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_interfaces__msg__HumanPjVision __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_interfaces__msg__HumanPjVision __declspec(deprecated)
#endif

namespace humanoid_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanPjVision_
{
  using Type = HumanPjVision_<ContainerAllocator>;

  explicit HumanPjVision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0l;
    }
  }

  explicit HumanPjVision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _flag_type =
    int32_t;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__flag(
    const int32_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_interfaces__msg__HumanPjVision
    std::shared_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_interfaces__msg__HumanPjVision
    std::shared_ptr<humanoid_interfaces::msg::HumanPjVision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanPjVision_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanPjVision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanPjVision_

// alias to use template instance with default allocator
using HumanPjVision =
  humanoid_interfaces::msg::HumanPjVision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace humanoid_interfaces

#endif  // HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_HPP_
