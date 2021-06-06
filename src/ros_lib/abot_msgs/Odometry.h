#ifndef _ROS_abot_msgs_Odometry_h
#define _ROS_abot_msgs_Odometry_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ros/time.h"

namespace abot_msgs
{

  class Odometry : public ros::Msg
  {
    public:
      typedef ros::Time _stamp_type;
      _stamp_type stamp;
      typedef float _x_type;
      _x_type x;
      typedef float _y_type;
      _y_type y;
      typedef float _th_type;
      _th_type th;
      typedef float _vxy_type;
      _vxy_type vxy;
      typedef float _vth_type;
      _vth_type vth;

    Odometry():
      stamp(),
      x(0),
      y(0),
      th(0),
      vxy(0),
      vth(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->stamp.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.sec);
      *(outbuffer + offset + 0) = (this->stamp.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stamp.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stamp.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stamp.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stamp.nsec);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->y);
      union {
        float real;
        uint32_t base;
      } u_th;
      u_th.real = this->th;
      *(outbuffer + offset + 0) = (u_th.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_th.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_th.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_th.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->th);
      union {
        float real;
        uint32_t base;
      } u_vxy;
      u_vxy.real = this->vxy;
      *(outbuffer + offset + 0) = (u_vxy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vxy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vxy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vxy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vxy);
      union {
        float real;
        uint32_t base;
      } u_vth;
      u_vth.real = this->vth;
      *(outbuffer + offset + 0) = (u_vth.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vth.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vth.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vth.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vth);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->stamp.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.sec);
      this->stamp.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->stamp.nsec);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->y = u_y.real;
      offset += sizeof(this->y);
      union {
        float real;
        uint32_t base;
      } u_th;
      u_th.base = 0;
      u_th.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_th.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_th.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_th.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->th = u_th.real;
      offset += sizeof(this->th);
      union {
        float real;
        uint32_t base;
      } u_vxy;
      u_vxy.base = 0;
      u_vxy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vxy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vxy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vxy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vxy = u_vxy.real;
      offset += sizeof(this->vxy);
      union {
        float real;
        uint32_t base;
      } u_vth;
      u_vth.base = 0;
      u_vth.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vth.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vth.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vth.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vth = u_vth.real;
      offset += sizeof(this->vth);
     return offset;
    }

    virtual const char * getType() override { return "abot_msgs/Odometry"; };
    virtual const char * getMD5() override { return "2babd65e1b16a6427cd428d79107b1b7"; };

  };

}
#endif
