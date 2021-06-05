#ifndef _ROS_abot_msgs_GeneralConfig_h
#define _ROS_abot_msgs_GeneralConfig_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class GeneralConfig : public ros::Msg
  {
    public:
      typedef float _encoders_pub_rate_type;
      _encoders_pub_rate_type encoders_pub_rate;
      typedef float _odometry_pub_rate_type;
      _odometry_pub_rate_type odometry_pub_rate;
      typedef int32_t _auto_stop_interval_type;
      _auto_stop_interval_type auto_stop_interval;

    GeneralConfig():
      encoders_pub_rate(0),
      odometry_pub_rate(0),
      auto_stop_interval(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_encoders_pub_rate;
      u_encoders_pub_rate.real = this->encoders_pub_rate;
      *(outbuffer + offset + 0) = (u_encoders_pub_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoders_pub_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoders_pub_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoders_pub_rate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoders_pub_rate);
      union {
        float real;
        uint32_t base;
      } u_odometry_pub_rate;
      u_odometry_pub_rate.real = this->odometry_pub_rate;
      *(outbuffer + offset + 0) = (u_odometry_pub_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odometry_pub_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odometry_pub_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odometry_pub_rate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->odometry_pub_rate);
      union {
        int32_t real;
        uint32_t base;
      } u_auto_stop_interval;
      u_auto_stop_interval.real = this->auto_stop_interval;
      *(outbuffer + offset + 0) = (u_auto_stop_interval.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_auto_stop_interval.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_auto_stop_interval.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_auto_stop_interval.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->auto_stop_interval);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_encoders_pub_rate;
      u_encoders_pub_rate.base = 0;
      u_encoders_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoders_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoders_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoders_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoders_pub_rate = u_encoders_pub_rate.real;
      offset += sizeof(this->encoders_pub_rate);
      union {
        float real;
        uint32_t base;
      } u_odometry_pub_rate;
      u_odometry_pub_rate.base = 0;
      u_odometry_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odometry_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odometry_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odometry_pub_rate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->odometry_pub_rate = u_odometry_pub_rate.real;
      offset += sizeof(this->odometry_pub_rate);
      union {
        int32_t real;
        uint32_t base;
      } u_auto_stop_interval;
      u_auto_stop_interval.base = 0;
      u_auto_stop_interval.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_auto_stop_interval.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_auto_stop_interval.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_auto_stop_interval.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->auto_stop_interval = u_auto_stop_interval.real;
      offset += sizeof(this->auto_stop_interval);
     return offset;
    }

    const char * getType(){ return "abot_msgs/GeneralConfig"; };
    const char * getMD5(){ return "09d8ab5490d5c06d659ac6576d9fb35d"; };

  };

}
#endif