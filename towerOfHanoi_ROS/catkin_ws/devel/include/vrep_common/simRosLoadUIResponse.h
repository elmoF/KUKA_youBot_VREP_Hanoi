/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/youbot/Simulation_Examples/KUKA_youBot_ROS_VREP/towerOfHanoi_ROS/catkin_ws/src/vrep_common/srv/simRosLoadUI.srv
 *
 */


#ifndef VREP_COMMON_MESSAGE_SIMROSLOADUIRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSLOADUIRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosLoadUIResponse_
{
  typedef simRosLoadUIResponse_<ContainerAllocator> Type;

  simRosLoadUIResponse_()
    : result(0)
    , uiHandles()  {
    }
  simRosLoadUIResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , uiHandles(_alloc)  {
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _uiHandles_type;
  _uiHandles_type uiHandles;




  typedef boost::shared_ptr< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct simRosLoadUIResponse_

typedef ::vrep_common::simRosLoadUIResponse_<std::allocator<void> > simRosLoadUIResponse;

typedef boost::shared_ptr< ::vrep_common::simRosLoadUIResponse > simRosLoadUIResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosLoadUIResponse const> simRosLoadUIResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/hydro/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/youbot/Simulation_Examples/KUKA_youBot_ROS_VREP/towerOfHanoi_ROS/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbc9ef8fe09d5c1e08d19e5a63c8edb0";
  }

  static const char* value(const ::vrep_common::simRosLoadUIResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdbc9ef8fe09d5c1eULL;
  static const uint64_t static_value2 = 0x08d19e5a63c8edb0ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosLoadUIResponse";
  }

  static const char* value(const ::vrep_common::simRosLoadUIResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
int32[] uiHandles\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosLoadUIResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.uiHandles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosLoadUIResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosLoadUIResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosLoadUIResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "uiHandles[]" << std::endl;
    for (size_t i = 0; i < v.uiHandles.size(); ++i)
    {
      s << indent << "  uiHandles[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.uiHandles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSLOADUIRESPONSE_H
