// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from humanoid_interfaces:msg/HumanPjVision.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_H_
#define HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/HumanPjVision in the package humanoid_interfaces.
typedef struct humanoid_interfaces__msg__HumanPjVision
{
  std_msgs__msg__Header header;
  int32_t flag;
} humanoid_interfaces__msg__HumanPjVision;

// Struct for a sequence of humanoid_interfaces__msg__HumanPjVision.
typedef struct humanoid_interfaces__msg__HumanPjVision__Sequence
{
  humanoid_interfaces__msg__HumanPjVision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_interfaces__msg__HumanPjVision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMANOID_INTERFACES__MSG__DETAIL__HUMAN_PJ_VISION__STRUCT_H_
