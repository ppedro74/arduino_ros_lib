#ifndef _ROS_abot_msgs_Encoders_h
#define _ROS_abot_msgs_Encoders_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class Encoders : public ros::Msg
  {
    public:
      typedef int32_t _left_encoder_type;
      _left_encoder_type left_encoder;
      typedef int32_t _right_encoder_type;
      _right_encoder_type right_encoder;
      typedef int32_t _left_motor_pwm_type;
      _left_motor_pwm_type left_motor_pwm;
      typedef int32_t _right_motor_pwm_type;
      _right_motor_pwm_type right_motor_pwm;

    Encoders():
      left_encoder(0),
      right_encoder(0),
      left_motor_pwm(0),
      right_motor_pwm(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_left_encoder;
      u_left_encoder.real = this->left_encoder;
      *(outbuffer + offset + 0) = (u_left_encoder.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_encoder.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_encoder.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_encoder.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_encoder);
      union {
        int32_t real;
        uint32_t base;
      } u_right_encoder;
      u_right_encoder.real = this->right_encoder;
      *(outbuffer + offset + 0) = (u_right_encoder.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_encoder.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_encoder.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_encoder.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_encoder);
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_pwm;
      u_left_motor_pwm.real = this->left_motor_pwm;
      *(outbuffer + offset + 0) = (u_left_motor_pwm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_pwm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_pwm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_pwm.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_motor_pwm);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_pwm;
      u_right_motor_pwm.real = this->right_motor_pwm;
      *(outbuffer + offset + 0) = (u_right_motor_pwm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_pwm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_pwm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_pwm.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_motor_pwm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_left_encoder;
      u_left_encoder.base = 0;
      u_left_encoder.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_encoder.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_encoder.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_encoder.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_encoder = u_left_encoder.real;
      offset += sizeof(this->left_encoder);
      union {
        int32_t real;
        uint32_t base;
      } u_right_encoder;
      u_right_encoder.base = 0;
      u_right_encoder.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_encoder.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_encoder.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_encoder.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_encoder = u_right_encoder.real;
      offset += sizeof(this->right_encoder);
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_pwm;
      u_left_motor_pwm.base = 0;
      u_left_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_motor_pwm = u_left_motor_pwm.real;
      offset += sizeof(this->left_motor_pwm);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_pwm;
      u_right_motor_pwm.base = 0;
      u_right_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_pwm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_motor_pwm = u_right_motor_pwm.real;
      offset += sizeof(this->right_motor_pwm);
     return offset;
    }

    const char * getType(){ return "abot_msgs/Encoders"; };
    const char * getMD5(){ return "80203bd4c0ecf7beed1c85784696df69"; };

  };

}
#endif