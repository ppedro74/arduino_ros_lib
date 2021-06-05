#ifndef _ROS_SERVICE_GetGeneralConfig_h
#define _ROS_SERVICE_GetGeneralConfig_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "abot_msgs/GeneralConfig.h"

namespace abot_msgs
{

static const char GETGENERALCONFIG[] = "abot_msgs/GetGeneralConfig";

  class GetGeneralConfigRequest : public ros::Msg
  {
    public:
      typedef int16_t _location_type;
      _location_type location;

    GetGeneralConfigRequest():
      location(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
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

    virtual int deserialize(unsigned char *inbuffer)
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

    const char * getType(){ return GETGENERALCONFIG; };
    const char * getMD5(){ return "b70bb023a4b06746b026ccb2482d09be"; };

  };

  class GetGeneralConfigResponse : public ros::Msg
  {
    public:
      typedef int32_t _result_type;
      _result_type result;
      typedef abot_msgs::GeneralConfig _config_type;
      _config_type config;

    GetGeneralConfigResponse():
      result(0),
      config()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
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

    virtual int deserialize(unsigned char *inbuffer)
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

    const char * getType(){ return GETGENERALCONFIG; };
    const char * getMD5(){ return "ccdba121092e378a7f5357d31be4b145"; };

  };

  class GetGeneralConfig {
    public:
    typedef GetGeneralConfigRequest Request;
    typedef GetGeneralConfigResponse Response;
  };

}
#endif
