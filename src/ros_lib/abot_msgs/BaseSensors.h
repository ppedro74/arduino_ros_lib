#ifndef _ROS_abot_msgs_BaseSensors_h
#define _ROS_abot_msgs_BaseSensors_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace abot_msgs
{

  class BaseSensors : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _charge_state_type;
      _charge_state_type charge_state;
      typedef float _voltage_type;
      _voltage_type voltage;
      typedef int16_t _voltage_raw_type;
      _voltage_raw_type voltage_raw;
      typedef float _current_type;
      _current_type current;
      typedef int16_t _current_raw_type;
      _current_raw_type current_raw;
      typedef float _left_motor_current_type;
      _left_motor_current_type left_motor_current;
      typedef int16_t _left_motor_current_raw_type;
      _left_motor_current_raw_type left_motor_current_raw;
      typedef float _right_motor_current_type;
      _right_motor_current_type right_motor_current;
      typedef int16_t _right_motor_current_raw_type;
      _right_motor_current_raw_type right_motor_current_raw;
      typedef float _total_motors_current_type;
      _total_motors_current_type total_motors_current;
      typedef int16_t _total_motors_current_raw_type;
      _total_motors_current_raw_type total_motors_current_raw;
      typedef float _motors_voltage_type;
      _motors_voltage_type motors_voltage;
      typedef int16_t _motors_voltage_raw_type;
      _motors_voltage_raw_type motors_voltage_raw;
      typedef int16_t _left_motor_output_type;
      _left_motor_output_type left_motor_output;
      typedef int16_t _right_motor_output_type;
      _right_motor_output_type right_motor_output;
      typedef int32_t _left_motor_counter_type;
      _left_motor_counter_type left_motor_counter;
      typedef int32_t _right_motor_counter_type;
      _right_motor_counter_type right_motor_counter;
      enum { DISCHARGING =  0 };
      enum { CHARGING =  1 };
      enum { CHARGED =  2 };

    BaseSensors():
      header(),
      charge_state(0),
      voltage(0),
      voltage_raw(0),
      current(0),
      current_raw(0),
      left_motor_current(0),
      left_motor_current_raw(0),
      right_motor_current(0),
      right_motor_current_raw(0),
      total_motors_current(0),
      total_motors_current_raw(0),
      motors_voltage(0),
      motors_voltage_raw(0),
      left_motor_output(0),
      right_motor_output(0),
      left_motor_counter(0),
      right_motor_counter(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->charge_state >> (8 * 0)) & 0xFF;
      offset += sizeof(this->charge_state);
      union {
        float real;
        uint32_t base;
      } u_voltage;
      u_voltage.real = this->voltage;
      *(outbuffer + offset + 0) = (u_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage);
      union {
        int16_t real;
        uint16_t base;
      } u_voltage_raw;
      u_voltage_raw.real = this->voltage_raw;
      *(outbuffer + offset + 0) = (u_voltage_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->voltage_raw);
      union {
        float real;
        uint32_t base;
      } u_current;
      u_current.real = this->current;
      *(outbuffer + offset + 0) = (u_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current);
      union {
        int16_t real;
        uint16_t base;
      } u_current_raw;
      u_current_raw.real = this->current_raw;
      *(outbuffer + offset + 0) = (u_current_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->current_raw);
      union {
        float real;
        uint32_t base;
      } u_left_motor_current;
      u_left_motor_current.real = this->left_motor_current;
      *(outbuffer + offset + 0) = (u_left_motor_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_motor_current);
      union {
        int16_t real;
        uint16_t base;
      } u_left_motor_current_raw;
      u_left_motor_current_raw.real = this->left_motor_current_raw;
      *(outbuffer + offset + 0) = (u_left_motor_current_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_current_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->left_motor_current_raw);
      union {
        float real;
        uint32_t base;
      } u_right_motor_current;
      u_right_motor_current.real = this->right_motor_current;
      *(outbuffer + offset + 0) = (u_right_motor_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_motor_current);
      union {
        int16_t real;
        uint16_t base;
      } u_right_motor_current_raw;
      u_right_motor_current_raw.real = this->right_motor_current_raw;
      *(outbuffer + offset + 0) = (u_right_motor_current_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_current_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->right_motor_current_raw);
      union {
        float real;
        uint32_t base;
      } u_total_motors_current;
      u_total_motors_current.real = this->total_motors_current;
      *(outbuffer + offset + 0) = (u_total_motors_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_total_motors_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_total_motors_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_total_motors_current.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->total_motors_current);
      union {
        int16_t real;
        uint16_t base;
      } u_total_motors_current_raw;
      u_total_motors_current_raw.real = this->total_motors_current_raw;
      *(outbuffer + offset + 0) = (u_total_motors_current_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_total_motors_current_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->total_motors_current_raw);
      union {
        float real;
        uint32_t base;
      } u_motors_voltage;
      u_motors_voltage.real = this->motors_voltage;
      *(outbuffer + offset + 0) = (u_motors_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motors_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motors_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motors_voltage.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motors_voltage);
      union {
        int16_t real;
        uint16_t base;
      } u_motors_voltage_raw;
      u_motors_voltage_raw.real = this->motors_voltage_raw;
      *(outbuffer + offset + 0) = (u_motors_voltage_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motors_voltage_raw.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->motors_voltage_raw);
      union {
        int16_t real;
        uint16_t base;
      } u_left_motor_output;
      u_left_motor_output.real = this->left_motor_output;
      *(outbuffer + offset + 0) = (u_left_motor_output.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_output.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->left_motor_output);
      union {
        int16_t real;
        uint16_t base;
      } u_right_motor_output;
      u_right_motor_output.real = this->right_motor_output;
      *(outbuffer + offset + 0) = (u_right_motor_output.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_output.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->right_motor_output);
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_counter;
      u_left_motor_counter.real = this->left_motor_counter;
      *(outbuffer + offset + 0) = (u_left_motor_counter.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_counter.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_counter.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_counter.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_motor_counter);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_counter;
      u_right_motor_counter.real = this->right_motor_counter;
      *(outbuffer + offset + 0) = (u_right_motor_counter.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_counter.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_counter.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_counter.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_motor_counter);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->charge_state =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->charge_state);
      union {
        float real;
        uint32_t base;
      } u_voltage;
      u_voltage.base = 0;
      u_voltage.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->voltage = u_voltage.real;
      offset += sizeof(this->voltage);
      union {
        int16_t real;
        uint16_t base;
      } u_voltage_raw;
      u_voltage_raw.base = 0;
      u_voltage_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->voltage_raw = u_voltage_raw.real;
      offset += sizeof(this->voltage_raw);
      union {
        float real;
        uint32_t base;
      } u_current;
      u_current.base = 0;
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->current = u_current.real;
      offset += sizeof(this->current);
      union {
        int16_t real;
        uint16_t base;
      } u_current_raw;
      u_current_raw.base = 0;
      u_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->current_raw = u_current_raw.real;
      offset += sizeof(this->current_raw);
      union {
        float real;
        uint32_t base;
      } u_left_motor_current;
      u_left_motor_current.base = 0;
      u_left_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_motor_current = u_left_motor_current.real;
      offset += sizeof(this->left_motor_current);
      union {
        int16_t real;
        uint16_t base;
      } u_left_motor_current_raw;
      u_left_motor_current_raw.base = 0;
      u_left_motor_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->left_motor_current_raw = u_left_motor_current_raw.real;
      offset += sizeof(this->left_motor_current_raw);
      union {
        float real;
        uint32_t base;
      } u_right_motor_current;
      u_right_motor_current.base = 0;
      u_right_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_motor_current = u_right_motor_current.real;
      offset += sizeof(this->right_motor_current);
      union {
        int16_t real;
        uint16_t base;
      } u_right_motor_current_raw;
      u_right_motor_current_raw.base = 0;
      u_right_motor_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->right_motor_current_raw = u_right_motor_current_raw.real;
      offset += sizeof(this->right_motor_current_raw);
      union {
        float real;
        uint32_t base;
      } u_total_motors_current;
      u_total_motors_current.base = 0;
      u_total_motors_current.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_total_motors_current.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_total_motors_current.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_total_motors_current.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->total_motors_current = u_total_motors_current.real;
      offset += sizeof(this->total_motors_current);
      union {
        int16_t real;
        uint16_t base;
      } u_total_motors_current_raw;
      u_total_motors_current_raw.base = 0;
      u_total_motors_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_total_motors_current_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->total_motors_current_raw = u_total_motors_current_raw.real;
      offset += sizeof(this->total_motors_current_raw);
      union {
        float real;
        uint32_t base;
      } u_motors_voltage;
      u_motors_voltage.base = 0;
      u_motors_voltage.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motors_voltage.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motors_voltage.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motors_voltage.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motors_voltage = u_motors_voltage.real;
      offset += sizeof(this->motors_voltage);
      union {
        int16_t real;
        uint16_t base;
      } u_motors_voltage_raw;
      u_motors_voltage_raw.base = 0;
      u_motors_voltage_raw.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motors_voltage_raw.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->motors_voltage_raw = u_motors_voltage_raw.real;
      offset += sizeof(this->motors_voltage_raw);
      union {
        int16_t real;
        uint16_t base;
      } u_left_motor_output;
      u_left_motor_output.base = 0;
      u_left_motor_output.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_output.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->left_motor_output = u_left_motor_output.real;
      offset += sizeof(this->left_motor_output);
      union {
        int16_t real;
        uint16_t base;
      } u_right_motor_output;
      u_right_motor_output.base = 0;
      u_right_motor_output.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_output.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->right_motor_output = u_right_motor_output.real;
      offset += sizeof(this->right_motor_output);
      union {
        int32_t real;
        uint32_t base;
      } u_left_motor_counter;
      u_left_motor_counter.base = 0;
      u_left_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_motor_counter = u_left_motor_counter.real;
      offset += sizeof(this->left_motor_counter);
      union {
        int32_t real;
        uint32_t base;
      } u_right_motor_counter;
      u_right_motor_counter.base = 0;
      u_right_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_counter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_motor_counter = u_right_motor_counter.real;
      offset += sizeof(this->right_motor_counter);
     return offset;
    }

    const char * getType(){ return "abot_msgs/BaseSensors"; };
    const char * getMD5(){ return "5fbbfa1a6e028b01582c0c726c9cfafc"; };

  };

}
#endif