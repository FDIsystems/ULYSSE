// Generated by gencpp from file sbg_driver/SbgShipMotionStatus.msg
// DO NOT EDIT!


#ifndef SBG_DRIVER_MESSAGE_SBGSHIPMOTIONSTATUS_H
#define SBG_DRIVER_MESSAGE_SBGSHIPMOTIONSTATUS_H


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
struct SbgShipMotionStatus_
{
  typedef SbgShipMotionStatus_<ContainerAllocator> Type;

  SbgShipMotionStatus_()
    : heave_valid(false)
    , heave_vel_aided(false)
    , period_available(false)
    , period_valid(false)  {
    }
  SbgShipMotionStatus_(const ContainerAllocator& _alloc)
    : heave_valid(false)
    , heave_vel_aided(false)
    , period_available(false)
    , period_valid(false)  {
  (void)_alloc;
    }



   typedef uint8_t _heave_valid_type;
  _heave_valid_type heave_valid;

   typedef uint8_t _heave_vel_aided_type;
  _heave_vel_aided_type heave_vel_aided;

   typedef uint8_t _period_available_type;
  _period_available_type period_available;

   typedef uint8_t _period_valid_type;
  _period_valid_type period_valid;





  typedef boost::shared_ptr< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SbgShipMotionStatus_

typedef ::sbg_driver::SbgShipMotionStatus_<std::allocator<void> > SbgShipMotionStatus;

typedef boost::shared_ptr< ::sbg_driver::SbgShipMotionStatus > SbgShipMotionStatusPtr;
typedef boost::shared_ptr< ::sbg_driver::SbgShipMotionStatus const> SbgShipMotionStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a834637d2b283cc5378d30ef92fcf13a";
  }

  static const char* value(const ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa834637d2b283cc5ULL;
  static const uint64_t static_value2 = 0x378d30ef92fcf13aULL;
};

template<class ContainerAllocator>
struct DataType< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sbg_driver/SbgShipMotionStatus";
  }

  static const char* value(const ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# SBG Ellipse Messages\n"
"# SbgShipMotionStatus\n"
"\n"
"# True after heave convergence time.\n"
"# False in following conditions:\n"
"# - Turn occurred and no velocity aiding is available\n"
"# - Heave reached higher/lower limits\n"
"# - If a step is detected and filter has to re-converge\n"
"# - If internal failure\n"
"bool heave_valid\n"
"\n"
"# True if heave output is compensated for transient accelerations\n"
"bool heave_vel_aided\n"
"\n"
"# True if the swell period is provided in this output\n"
"bool period_available\n"
"\n"
"# True if the period returned is assumed to be valid or not.\n"
"bool period_valid\n"
;
  }

  static const char* value(const ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.heave_valid);
      stream.next(m.heave_vel_aided);
      stream.next(m.period_available);
      stream.next(m.period_valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SbgShipMotionStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sbg_driver::SbgShipMotionStatus_<ContainerAllocator>& v)
  {
    s << indent << "heave_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.heave_valid);
    s << indent << "heave_vel_aided: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.heave_vel_aided);
    s << indent << "period_available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.period_available);
    s << indent << "period_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.period_valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SBG_DRIVER_MESSAGE_SBGSHIPMOTIONSTATUS_H
