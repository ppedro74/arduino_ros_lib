#ifndef _ROS_abot_msgs_TestFloat64_h
#define _ROS_abot_msgs_TestFloat64_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class TestFloat64 : public ros::Msg
  {
    public:
      typedef double _f64_1_type;
      _f64_1_type f64_1;
      typedef double _f64_2_type;
      _f64_2_type f64_2;
      typedef double _f64_3_type;
      _f64_3_type f64_3;
      typedef double _f64_4_type;
      _f64_4_type f64_4;
      typedef double _f64_5_type;
      _f64_5_type f64_5;
      typedef double _f64_6_type;
      _f64_6_type f64_6;

    TestFloat64():
      f64_1(0),
      f64_2(0),
      f64_3(0),
      f64_4(0),
      f64_5(0),
      f64_6(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_f64_1;
      u_f64_1.real = this->f64_1;
      *(outbuffer + offset + 0) = (u_f64_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_1);
      union {
        double real;
        uint64_t base;
      } u_f64_2;
      u_f64_2.real = this->f64_2;
      *(outbuffer + offset + 0) = (u_f64_2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_2);
      union {
        double real;
        uint64_t base;
      } u_f64_3;
      u_f64_3.real = this->f64_3;
      *(outbuffer + offset + 0) = (u_f64_3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_3);
      union {
        double real;
        uint64_t base;
      } u_f64_4;
      u_f64_4.real = this->f64_4;
      *(outbuffer + offset + 0) = (u_f64_4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_4.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_4.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_4.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_4.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_4.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_4);
      union {
        double real;
        uint64_t base;
      } u_f64_5;
      u_f64_5.real = this->f64_5;
      *(outbuffer + offset + 0) = (u_f64_5.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_5.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_5.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_5.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_5.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_5.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_5.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_5.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_5);
      union {
        double real;
        uint64_t base;
      } u_f64_6;
      u_f64_6.real = this->f64_6;
      *(outbuffer + offset + 0) = (u_f64_6.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f64_6.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f64_6.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f64_6.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f64_6.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f64_6.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f64_6.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f64_6.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f64_6);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_f64_1;
      u_f64_1.base = 0;
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_1 = u_f64_1.real;
      offset += sizeof(this->f64_1);
      union {
        double real;
        uint64_t base;
      } u_f64_2;
      u_f64_2.base = 0;
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_2 = u_f64_2.real;
      offset += sizeof(this->f64_2);
      union {
        double real;
        uint64_t base;
      } u_f64_3;
      u_f64_3.base = 0;
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_3 = u_f64_3.real;
      offset += sizeof(this->f64_3);
      union {
        double real;
        uint64_t base;
      } u_f64_4;
      u_f64_4.base = 0;
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_4.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_4 = u_f64_4.real;
      offset += sizeof(this->f64_4);
      union {
        double real;
        uint64_t base;
      } u_f64_5;
      u_f64_5.base = 0;
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_5.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_5 = u_f64_5.real;
      offset += sizeof(this->f64_5);
      union {
        double real;
        uint64_t base;
      } u_f64_6;
      u_f64_6.base = 0;
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_f64_6.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->f64_6 = u_f64_6.real;
      offset += sizeof(this->f64_6);
     return offset;
    }

    const char * getType(){ return "abot_msgs/TestFloat64"; };
    const char * getMD5(){ return "bec602bc91aa4ba4c13e0c3c72450cd5"; };

  };

}
#endif