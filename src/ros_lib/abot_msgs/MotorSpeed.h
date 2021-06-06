#ifndef _ROS_abot_msgs_MotorSpeed_h
#define _ROS_abot_msgs_MotorSpeed_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class MotorSpeed : public ros::Msg
  {
    public:
      typedef int32_t _left_motor_speed_type;
      _left_motor_speed_type left_motor_speed;
      typedef int32_t _right_motor_speed_type;
      _right_motor_speed_type right_motor_speed;

    MotorSpeed():
      left_motor_speed(0),
      right_motor_speed(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_speed;
      u_left_motor_speed.real = this->left_motor_speed;
      *(outbuffer + offset + 0) = (u_left_motor_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_motor_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_speed;
      u_right_motor_speed.real = this->right_motor_speed;
      *(outbuffer + offset + 0) = (u_right_motor_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_motor_speed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_speed;
      u_left_motor_speed.base = 0;
      u_left_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_motor_speed = u_left_motor_speed.real;
      offset += sizeof(this->left_motor_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_speed;
      u_right_motor_speed.base = 0;
      u_right_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_motor_speed = u_right_motor_speed.real;
      offset += sizeof(this->right_motor_speed);
     return offset;
    }

    virtual const char * getType() override { return "abot_msgs/MotorSpeed"; };
    virtual const char * getMD5() override { return "adc7efe538376df716a8c31a1a72b083"; };

  };

}
#endif
