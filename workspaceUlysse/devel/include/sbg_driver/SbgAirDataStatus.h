// Generated by gencpp from file sbg_driver/SbgAirDataStatus.msg
// DO NOT EDIT!


#ifndef SBG_DRIVER_MESSAGE_SBGAIRDATASTATUS_H
#define SBG_DRIVER_MESSAGE_SBGAIRDATASTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sbg_driver
{
template <class ContainerAllocator>
struct SbgAirDataStatus_
{
  typedef SbgAirDataStatus_<ContainerAllocator> Type;

  SbgAirDataStatus_()
    : is_delay_time(false)
    , pressure_valid(false)
    , altitude_valid(false)
    , pressure_diff_valid(false)
    , air_speed_valid(false)
    , air_temperature_valid(false)  {
    }
  SbgAirDataStatus_(const ContainerAllocator& _alloc)
    : is_delay_time(false)
    , pressure_valid(false)
    , altitude_valid(false)
    , pressure_diff_valid(false)
    , air_speed_valid(false)
    , air_temperature_valid(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_delay_time_type;
  _is_delay_time_type is_delay_time;

   typedef uint8_t _pressure_valid_type;
  _pressure_valid_type pressure_valid;

   typedef uint8_t _altitude_valid_type;
  _altitude_valid_type altitude_valid;

   typedef uint8_t _pressure_diff_valid_type;
  _pressure_diff_valid_type pressure_diff_valid;

   typedef uint8_t _air_speed_valid_type;
  _air_speed_valid_type air_speed_valid;

   typedef uint8_t _air_temperature_valid_type;
  _air_temperature_valid_type air_temperature_valid;





  typedef boost::shared_ptr< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SbgAirDataStatus_

typedef ::sbg_driver::SbgAirDataStatus_<std::allocator<void> > SbgAirDataStatus;

typedef boost::shared_ptr< ::sbg_driver::SbgAirDataStatus > SbgAirDataStatusPtr;
typedef boost::shared_ptr< ::sbg_driver::SbgAirDataStatus const> SbgAirDataStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sbg_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sbg_driver': ['/home/cambernard/workspaceUlysse/src/sbg_ros_driver/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a096a0984e0fe096308cfb42a254e4a";
  }

  static const char* value(const ::sbg_driver::SbgAirDataStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a096a0984e0fe09ULL;
  static const uint64_t static_value2 = 0x6308cfb42a254e4aULL;
};

template<class ContainerAllocator>
struct DataType< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sbg_driver/SbgAirDataStatus";
  }

  static const char* value(const ::sbg_driver::SbgAirDataStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# SBG Ellipse Messages\n"
"# Submessage\n"
"\n"
"# True if the time stamp field represents a delay instead of an absolute time stamp.\n"
"bool is_delay_time\n"
"\n"
"# True if the pressure field is filled and valid.\n"
"bool pressure_valid\n"
"\n"
"# True if the barometric altitude field is filled and valid.\n"
"bool altitude_valid\n"
"\n"
"# True if the differential pressure field is filled and valid.\n"
"bool pressure_diff_valid\n"
"\n"
"# True if the true airspeed field is filled and valid.\n"
"bool air_speed_valid\n"
"\n"
"# True if the output air temperature field is filled and valid.\n"
"bool air_temperature_valid\n"
;
  }

  static const char* value(const ::sbg_driver::SbgAirDataStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_delay_time);
      stream.next(m.pressure_valid);
      stream.next(m.altitude_valid);
      stream.next(m.pressure_diff_valid);
      stream.next(m.air_speed_valid);
      stream.next(m.air_temperature_valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SbgAirDataStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sbg_driver::SbgAirDataStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sbg_driver::SbgAirDataStatus_<ContainerAllocator>& v)
  {
    s << indent << "is_delay_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_delay_time);
    s << indent << "pressure_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pressure_valid);
    s << indent << "altitude_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.altitude_valid);
    s << indent << "pressure_diff_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pressure_diff_valid);
    s << indent << "air_speed_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.air_speed_valid);
    s << indent << "air_temperature_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.air_temperature_valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SBG_DRIVER_MESSAGE_SBGAIRDATASTATUS_H
