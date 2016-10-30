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
 * Auto-generated by gensrv_cpp from file /home/youbot/Simulation_Examples/KUKA_youBot_ROS_VREP/towerOfHanoi_ROS/catkin_ws/src/vrep_skeleton_msg_and_srv/srv/displayText.srv
 *
 */


#ifndef VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXT_H
#define VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXT_H

#include <ros/service_traits.h>


#include <vrep_skeleton_msg_and_srv/displayTextRequest.h>
#include <vrep_skeleton_msg_and_srv/displayTextResponse.h>


namespace vrep_skeleton_msg_and_srv
{

struct displayText
{

typedef displayTextRequest Request;
typedef displayTextResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct displayText
} // namespace vrep_skeleton_msg_and_srv


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_skeleton_msg_and_srv::displayText > {
  static const char* value()
  {
    return "d53844fdc821fc6baaf569373762bd8b";
  }

  static const char* value(const ::vrep_skeleton_msg_and_srv::displayText&) { return value(); }
};

template<>
struct DataType< ::vrep_skeleton_msg_and_srv::displayText > {
  static const char* value()
  {
    return "vrep_skeleton_msg_and_srv/displayText";
  }

  static const char* value(const ::vrep_skeleton_msg_and_srv::displayText&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_skeleton_msg_and_srv::displayTextRequest> should match 
// service_traits::MD5Sum< ::vrep_skeleton_msg_and_srv::displayText > 
template<>
struct MD5Sum< ::vrep_skeleton_msg_and_srv::displayTextRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_skeleton_msg_and_srv::displayText >::value();
  }
  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_skeleton_msg_and_srv::displayTextRequest> should match 
// service_traits::DataType< ::vrep_skeleton_msg_and_srv::displayText > 
template<>
struct DataType< ::vrep_skeleton_msg_and_srv::displayTextRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_skeleton_msg_and_srv::displayText >::value();
  }
  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_skeleton_msg_and_srv::displayTextResponse> should match 
// service_traits::MD5Sum< ::vrep_skeleton_msg_and_srv::displayText > 
template<>
struct MD5Sum< ::vrep_skeleton_msg_and_srv::displayTextResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_skeleton_msg_and_srv::displayText >::value();
  }
  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_skeleton_msg_and_srv::displayTextResponse> should match 
// service_traits::DataType< ::vrep_skeleton_msg_and_srv::displayText > 
template<>
struct DataType< ::vrep_skeleton_msg_and_srv::displayTextResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_skeleton_msg_and_srv::displayText >::value();
  }
  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXT_H
