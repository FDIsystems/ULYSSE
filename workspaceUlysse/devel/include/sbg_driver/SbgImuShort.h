// Generated by gencpp from file sbg_driver/SbgImuShort.msg
// DO NOT EDIT!


#ifndef SBG_DRIVER_MESSAGE_SBGIMUSHORT_H
#define SBG_DRIVER_MESSAGE_SBGIMUSHORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sbg_driver/SbgImuStatus.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace sbg_driver
{
template <class ContainerAllocator>
struct SbgImuShort_
{
  typedef SbgImuShort_<ContainerAllocator> Type;

  SbgImuShort_()
    : header()
    , time_stamp(0)
    , imu_status()
    , delta_velocity()
    , delta_angle()
    , temperature(0)  {
    }
  SbgImuShort_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_stamp(0)
    , imu_status(_alloc)
    , delta_velocity(_alloc)
    , delta_angle(_alloc)
    , temperature(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _time_stamp_type;
  _time_stamp_type time_stamp;

   typedef  ::sbg_driver::SbgImuStatus_<ContainerAllocator>  _imu_status_type;
  _imu_status_type imu_status;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _delta_velocity_type;
  _delta_velocity_type delta_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _delta_angle_type;
  _delta_angle_type delta_angle;

   typedef int16_t _temperature_type;
  _temperature_type temperature;





  typedef boost::shared_ptr< ::sbg_driver::SbgImuShort_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sbg_driver::SbgImuShort_<ContainerAllocator> const> ConstPtr;

}; // struct SbgImuShort_

typedef ::sbg_driver::SbgImuShort_<std::allocator<void> > SbgImuShort;

typedef boost::shared_ptr< ::sbg_driver::SbgImuShort > SbgImuShortPtr;
typedef boost::shared_ptr< ::sbg_driver::SbgImuShort const> SbgImuShortConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sbg_driver::SbgImuShort_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sbg_driver::SbgImuShort_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sbg_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sbg_driver': ['/home/cambernard/workspaceUlysse/src/sbg_ros_driver/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgImuShort_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgImuShort_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgImuShort_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3be77ff9ef2640e787db71f0246e7518";
  }

  static const char* value(const ::sbg_driver::SbgImuShort_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3be77ff9ef2640e7ULL;
  static const uint64_t static_value2 = 0x87db71f0246e7518ULL;
};

template<class ContainerAllocator>
struct DataType< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sbg_driver/SbgImuShort";
  }

  static const char* value(const ::sbg_driver::SbgImuShort_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# SBG Ellipse Messages\n"
"Header header\n"
"\n"
"# Time since sensor is powered up us \n"
"uint32 time_stamp\n"
"\n"
"# IMU Status\n"
"SbgImuStatus imu_status\n"
"\n"
"# X, Y, Z delta velocity. Unit is 1048576 LSB for 1 m.s^-2.\n"
"geometry_msgs/Vector3 delta_velocity\n"
"\n"
"# X, Y, Z delta angle. Unit is 67108864 LSB for 1 rad.s^-1.\n"
"geometry_msgs/Vector3 delta_angle\n"
"\n"
"# IMU average temperature. Unit is 256 LSB for 1°C.\n"
"int16 temperature\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sbg_driver/SbgImuStatus\n"
"# SBG Ellipse Messages\n"
"# Submessage SbgImuData\n"
"\n"
"# True if the communication with the IMU is ok.\n"
"bool imu_com\n"
"\n"
"# True if internal IMU passes Built In Test (Calibration, CPU)\n"
"bool imu_status\n"
"\n"
"# True if accelerometer X passes Built In Test\n"
"bool imu_accel_x\n"
"\n"
"# True if accelerometer Y passes Built In Test\n"
"bool imu_accel_y\n"
"\n"
"# True if accelerometer Z passes Built In Test\n"
"bool imu_accel_z\n"
"\n"
"# True if gyroscope X passes Built In Test\n"
"bool imu_gyro_x\n"
"\n"
"# True if gyroscope Y passes Built In Test\n"
"bool imu_gyro_y\n"
"\n"
"# True if gyroscope Z passes Built In Test\n"
"bool imu_gyro_z\n"
"\n"
"# True if accelerometers are within operating range\n"
"bool imu_accels_in_range\n"
"\n"
"# True if gyroscopes are within operating range\n"
"bool imu_gyros_in_range\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::sbg_driver::SbgImuShort_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_stamp);
      stream.next(m.imu_status);
      stream.next(m.delta_velocity);
      stream.next(m.delta_angle);
      stream.next(m.temperature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SbgImuShort_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sbg_driver::SbgImuShort_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sbg_driver::SbgImuShort_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_stamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_stamp);
    s << indent << "imu_status: ";
    s << std::endl;
    Printer< ::sbg_driver::SbgImuStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.imu_status);
    s << indent << "delta_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.delta_velocity);
    s << indent << "delta_angle: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.delta_angle);
    s << indent << "temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.temperature);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SBG_DRIVER_MESSAGE_SBGIMUSHORT_H
