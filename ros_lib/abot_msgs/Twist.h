#ifndef _ROS_abot_msgs_Twist_h
#define _ROS_abot_msgs_Twist_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class Twist : public ros::Msg
  {
    public:
      typedef float _linear_x_type;
      _linear_x_type linear_x;
      typedef float _angular_z_type;
      _angular_z_type angular_z;

    Twist():
      linear_x(0),
      angular_z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_linear_x;
      u_linear_x.real = this->linear_x;
      *(outbuffer + offset + 0) = (u_linear_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_linear_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_linear_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_linear_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->linear_x);
      union {
        float real;
        uint32_t base;
      } u_angular_z;
      u_angular_z.real = this->angular_z;
      *(outbuffer + offset + 0) = (u_angular_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angular_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angular_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angular_z.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angular_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_linear_x;
      u_linear_x.base = 0;
      u_linear_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_linear_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_linear_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_linear_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->linear_x = u_linear_x.real;
      offset += sizeof(this->linear_x);
      union {
        float real;
        uint32_t base;
      } u_angular_z;
      u_angular_z.base = 0;
      u_angular_z.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angular_z.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angular_z.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angular_z.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angular_z = u_angular_z.real;
      offset += sizeof(this->angular_z);
     return offset;
    }

    const char * getType(){ return "abot_msgs/Twist"; };
    const char * getMD5(){ return "7b6eda632af9379cf3ed8837f198b9c2"; };

  };

}
#endif