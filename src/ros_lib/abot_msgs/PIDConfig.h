#ifndef _ROS_abot_msgs_PIDConfig_h
#define _ROS_abot_msgs_PIDConfig_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class PIDConfig : public ros::Msg
  {
    public:
      typedef float _motor_pid_kp_type;
      _motor_pid_kp_type motor_pid_kp;
      typedef float _motor_pid_kd_type;
      _motor_pid_kd_type motor_pid_kd;
      typedef float _motor_pid_ki_type;
      _motor_pid_ki_type motor_pid_ki;
      typedef float _motor_pid_ko_type;
      _motor_pid_ko_type motor_pid_ko;

    PIDConfig():
      motor_pid_kp(0),
      motor_pid_kd(0),
      motor_pid_ki(0),
      motor_pid_ko(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_motor_pid_kp;
      u_motor_pid_kp.real = this->motor_pid_kp;
      *(outbuffer + offset + 0) = (u_motor_pid_kp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_pid_kp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_pid_kp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_pid_kp.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_pid_kp);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_kd;
      u_motor_pid_kd.real = this->motor_pid_kd;
      *(outbuffer + offset + 0) = (u_motor_pid_kd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_pid_kd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_pid_kd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_pid_kd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_pid_kd);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_ki;
      u_motor_pid_ki.real = this->motor_pid_ki;
      *(outbuffer + offset + 0) = (u_motor_pid_ki.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_pid_ki.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_pid_ki.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_pid_ki.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_pid_ki);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_ko;
      u_motor_pid_ko.real = this->motor_pid_ko;
      *(outbuffer + offset + 0) = (u_motor_pid_ko.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_pid_ko.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_pid_ko.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_pid_ko.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_pid_ko);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_motor_pid_kp;
      u_motor_pid_kp.base = 0;
      u_motor_pid_kp.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_pid_kp.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_pid_kp.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_pid_kp.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_pid_kp = u_motor_pid_kp.real;
      offset += sizeof(this->motor_pid_kp);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_kd;
      u_motor_pid_kd.base = 0;
      u_motor_pid_kd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_pid_kd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_pid_kd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_pid_kd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_pid_kd = u_motor_pid_kd.real;
      offset += sizeof(this->motor_pid_kd);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_ki;
      u_motor_pid_ki.base = 0;
      u_motor_pid_ki.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_pid_ki.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_pid_ki.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_pid_ki.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_pid_ki = u_motor_pid_ki.real;
      offset += sizeof(this->motor_pid_ki);
      union {
        float real;
        uint32_t base;
      } u_motor_pid_ko;
      u_motor_pid_ko.base = 0;
      u_motor_pid_ko.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motor_pid_ko.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motor_pid_ko.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motor_pid_ko.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motor_pid_ko = u_motor_pid_ko.real;
      offset += sizeof(this->motor_pid_ko);
     return offset;
    }

    const char * getType(){ return "abot_msgs/PIDConfig"; };
    const char * getMD5(){ return "284e8a07d4989e7dfe2fb872e6082bbe"; };

  };

}
#endif