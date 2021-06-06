#ifndef _ROS_abot_msgs_CliffSensors_h
#define _ROS_abot_msgs_CliffSensors_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace abot_msgs
{

  class CliffSensors : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _cliff_front_left1_type;
      _cliff_front_left1_type cliff_front_left1;
      typedef float _cliff_front_left2_type;
      _cliff_front_left2_type cliff_front_left2;
      typedef float _cliff_front_center_type;
      _cliff_front_center_type cliff_front_center;
      typedef float _cliff_front_right1_type;
      _cliff_front_right1_type cliff_front_right1;
      typedef float _cliff_front_right2_type;
      _cliff_front_right2_type cliff_front_right2;
      typedef int32_t _cliff_front_left1_raw_type;
      _cliff_front_left1_raw_type cliff_front_left1_raw;
      typedef int32_t _cliff_front_left2_raw_type;
      _cliff_front_left2_raw_type cliff_front_left2_raw;
      typedef int32_t _cliff_front_center_raw_type;
      _cliff_front_center_raw_type cliff_front_center_raw;
      typedef int32_t _cliff_front_right1_raw_type;
      _cliff_front_right1_raw_type cliff_front_right1_raw;
      typedef int32_t _cliff_front_right2_raw_type;
      _cliff_front_right2_raw_type cliff_front_right2_raw;

    CliffSensors():
      header(),
      cliff_front_left1(0),
      cliff_front_left2(0),
      cliff_front_center(0),
      cliff_front_right1(0),
      cliff_front_right2(0),
      cliff_front_left1_raw(0),
      cliff_front_left2_raw(0),
      cliff_front_center_raw(0),
      cliff_front_right1_raw(0),
      cliff_front_right2_raw(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_left1;
      u_cliff_front_left1.real = this->cliff_front_left1;
      *(outbuffer + offset + 0) = (u_cliff_front_left1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_left1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_left1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_left1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_left1);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_left2;
      u_cliff_front_left2.real = this->cliff_front_left2;
      *(outbuffer + offset + 0) = (u_cliff_front_left2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_left2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_left2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_left2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_left2);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_center;
      u_cliff_front_center.real = this->cliff_front_center;
      *(outbuffer + offset + 0) = (u_cliff_front_center.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_center.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_center.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_center.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_center);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_right1;
      u_cliff_front_right1.real = this->cliff_front_right1;
      *(outbuffer + offset + 0) = (u_cliff_front_right1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_right1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_right1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_right1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_right1);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_right2;
      u_cliff_front_right2.real = this->cliff_front_right2;
      *(outbuffer + offset + 0) = (u_cliff_front_right2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_right2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_right2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_right2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_right2);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_left1_raw;
      u_cliff_front_left1_raw.real = this->cliff_front_left1_raw;
      *(outbuffer + offset + 0) = (u_cliff_front_left1_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_left1_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_left1_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_left1_raw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_left1_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_left2_raw;
      u_cliff_front_left2_raw.real = this->cliff_front_left2_raw;
      *(outbuffer + offset + 0) = (u_cliff_front_left2_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_left2_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_left2_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_left2_raw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_left2_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_center_raw;
      u_cliff_front_center_raw.real = this->cliff_front_center_raw;
      *(outbuffer + offset + 0) = (u_cliff_front_center_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_center_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_center_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_center_raw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_center_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_right1_raw;
      u_cliff_front_right1_raw.real = this->cliff_front_right1_raw;
      *(outbuffer + offset + 0) = (u_cliff_front_right1_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_right1_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_right1_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_right1_raw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_right1_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_right2_raw;
      u_cliff_front_right2_raw.real = this->cliff_front_right2_raw;
      *(outbuffer + offset + 0) = (u_cliff_front_right2_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cliff_front_right2_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cliff_front_right2_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cliff_front_right2_raw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cliff_front_right2_raw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_left1;
      u_cliff_front_left1.base = 0;
      u_cliff_front_left1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_left1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_left1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_left1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_left1 = u_cliff_front_left1.real;
      offset += sizeof(this->cliff_front_left1);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_left2;
      u_cliff_front_left2.base = 0;
      u_cliff_front_left2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_left2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_left2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_left2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_left2 = u_cliff_front_left2.real;
      offset += sizeof(this->cliff_front_left2);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_center;
      u_cliff_front_center.base = 0;
      u_cliff_front_center.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_center.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_center.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_center.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_center = u_cliff_front_center.real;
      offset += sizeof(this->cliff_front_center);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_right1;
      u_cliff_front_right1.base = 0;
      u_cliff_front_right1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_right1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_right1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_right1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_right1 = u_cliff_front_right1.real;
      offset += sizeof(this->cliff_front_right1);
      union {
        float real;
        uint32_t base;
      } u_cliff_front_right2;
      u_cliff_front_right2.base = 0;
      u_cliff_front_right2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_right2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_right2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_right2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_right2 = u_cliff_front_right2.real;
      offset += sizeof(this->cliff_front_right2);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_left1_raw;
      u_cliff_front_left1_raw.base = 0;
      u_cliff_front_left1_raw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_left1_raw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_left1_raw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_left1_raw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_left1_raw = u_cliff_front_left1_raw.real;
      offset += sizeof(this->cliff_front_left1_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_left2_raw;
      u_cliff_front_left2_raw.base = 0;
      u_cliff_front_left2_raw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_left2_raw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_left2_raw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_left2_raw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_left2_raw = u_cliff_front_left2_raw.real;
      offset += sizeof(this->cliff_front_left2_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_center_raw;
      u_cliff_front_center_raw.base = 0;
      u_cliff_front_center_raw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_center_raw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_center_raw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_center_raw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_center_raw = u_cliff_front_center_raw.real;
      offset += sizeof(this->cliff_front_center_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_right1_raw;
      u_cliff_front_right1_raw.base = 0;
      u_cliff_front_right1_raw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_right1_raw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_right1_raw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_right1_raw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_right1_raw = u_cliff_front_right1_raw.real;
      offset += sizeof(this->cliff_front_right1_raw);
      union {
        int32_t real;
        uint32_t base;
      } u_cliff_front_right2_raw;
      u_cliff_front_right2_raw.base = 0;
      u_cliff_front_right2_raw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cliff_front_right2_raw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cliff_front_right2_raw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cliff_front_right2_raw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cliff_front_right2_raw = u_cliff_front_right2_raw.real;
      offset += sizeof(this->cliff_front_right2_raw);
     return offset;
    }

    virtual const char * getType() override { return "abot_msgs/CliffSensors"; };
    virtual const char * getMD5() override { return "d85460f93148ce8bd4781c9e2dbd96e8"; };

  };

}
#endif
