#ifndef _ROS_SERVICE_GetDiffDriveConfig_h
#define _ROS_SERVICE_GetDiffDriveConfig_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "abot_msgs/DiffDriveConfig.h"

namespace abot_msgs
{

static const char GETDIFFDRIVECONFIG[] = "abot_msgs/GetDiffDriveConfig";

  class GetDiffDriveConfigRequest : public ros::Msg
  {
    public:
      typedef int16_t _location_type;
      _location_type location;

    GetDiffDriveConfigRequest():
      location(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_location;
      u_location.real = this->location;
      *(outbuffer + offset + 0) = (u_location.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_location.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->location);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_location;
      u_location.base = 0;
      u_location.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_location.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->location = u_location.real;
      offset += sizeof(this->location);
     return offset;
    }

    virtual const char * getType() override { return GETDIFFDRIVECONFIG; };
    virtual const char * getMD5() override { return "b70bb023a4b06746b026ccb2482d09be"; };

  };

  class GetDiffDriveConfigResponse : public ros::Msg
  {
    public:
      typedef int32_t _result_type;
      _result_type result;
      typedef abot_msgs::DiffDriveConfig _config_type;
      _config_type config;

    GetDiffDriveConfigResponse():
      result(0),
      config()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_result;
      u_result.real = this->result;
      *(outbuffer + offset + 0) = (u_result.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_result.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_result.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_result.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->result);
      offset += this->config.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_result;
      u_result.base = 0;
      u_result.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_result.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_result.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_result.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->result = u_result.real;
      offset += sizeof(this->result);
      offset += this->config.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GETDIFFDRIVECONFIG; };
    virtual const char * getMD5() override { return "9480b9b761f4954aab8c8721c91d2101"; };

  };

  class GetDiffDriveConfig {
    public:
    typedef GetDiffDriveConfigRequest Request;
    typedef GetDiffDriveConfigResponse Response;
  };

}
#endif
