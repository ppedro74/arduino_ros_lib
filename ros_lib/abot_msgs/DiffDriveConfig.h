#ifndef _ROS_abot_msgs_DiffDriveConfig_h
#define _ROS_abot_msgs_DiffDriveConfig_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace abot_msgs
{

  class DiffDriveConfig : public ros::Msg
  {
    public:
      typedef float _wheel_diameter_type;
      _wheel_diameter_type wheel_diameter;
      typedef float _wheel_track_type;
      _wheel_track_type wheel_track;
      typedef float _gear_reduction_type;
      _gear_reduction_type gear_reduction;
      typedef int32_t _encoder_resolution_type;
      _encoder_resolution_type encoder_resolution;

    DiffDriveConfig():
      wheel_diameter(0),
      wheel_track(0),
      gear_reduction(0),
      encoder_resolution(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_wheel_diameter;
      u_wheel_diameter.real = this->wheel_diameter;
      *(outbuffer + offset + 0) = (u_wheel_diameter.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wheel_diameter.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wheel_diameter.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wheel_diameter.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wheel_diameter);
      union {
        float real;
        uint32_t base;
      } u_wheel_track;
      u_wheel_track.real = this->wheel_track;
      *(outbuffer + offset + 0) = (u_wheel_track.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wheel_track.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wheel_track.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wheel_track.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wheel_track);
      union {
        float real;
        uint32_t base;
      } u_gear_reduction;
      u_gear_reduction.real = this->gear_reduction;
      *(outbuffer + offset + 0) = (u_gear_reduction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gear_reduction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gear_reduction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gear_reduction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gear_reduction);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder_resolution;
      u_encoder_resolution.real = this->encoder_resolution;
      *(outbuffer + offset + 0) = (u_encoder_resolution.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_resolution.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder_resolution.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder_resolution.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_resolution);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_wheel_diameter;
      u_wheel_diameter.base = 0;
      u_wheel_diameter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wheel_diameter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wheel_diameter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wheel_diameter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->wheel_diameter = u_wheel_diameter.real;
      offset += sizeof(this->wheel_diameter);
      union {
        float real;
        uint32_t base;
      } u_wheel_track;
      u_wheel_track.base = 0;
      u_wheel_track.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wheel_track.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wheel_track.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wheel_track.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->wheel_track = u_wheel_track.real;
      offset += sizeof(this->wheel_track);
      union {
        float real;
        uint32_t base;
      } u_gear_reduction;
      u_gear_reduction.base = 0;
      u_gear_reduction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gear_reduction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gear_reduction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gear_reduction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->gear_reduction = u_gear_reduction.real;
      offset += sizeof(this->gear_reduction);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder_resolution;
      u_encoder_resolution.base = 0;
      u_encoder_resolution.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder_resolution.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder_resolution.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder_resolution.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder_resolution = u_encoder_resolution.real;
      offset += sizeof(this->encoder_resolution);
     return offset;
    }

    virtual const char * getType() override { return "abot_msgs/DiffDriveConfig"; };
    virtual const char * getMD5() override { return "b141db4ec23d781423ba8521cd452618"; };

  };

}
#endif
