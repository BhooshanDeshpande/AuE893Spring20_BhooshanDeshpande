// Generated by gencpp from file people_msgs/People.msg
// DO NOT EDIT!


#ifndef PEOPLE_MSGS_MESSAGE_PEOPLE_H
#define PEOPLE_MSGS_MESSAGE_PEOPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <people_msgs/Person.h>

namespace people_msgs
{
template <class ContainerAllocator>
struct People_
{
  typedef People_<ContainerAllocator> Type;

  People_()
    : header()
    , people()  {
    }
  People_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , people(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::people_msgs::Person_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::people_msgs::Person_<ContainerAllocator> >::other >  _people_type;
  _people_type people;





  typedef boost::shared_ptr< ::people_msgs::People_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::people_msgs::People_<ContainerAllocator> const> ConstPtr;

}; // struct People_

typedef ::people_msgs::People_<std::allocator<void> > People;

typedef boost::shared_ptr< ::people_msgs::People > PeoplePtr;
typedef boost::shared_ptr< ::people_msgs::People const> PeopleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::people_msgs::People_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::people_msgs::People_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'people_msgs': ['/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/src/auefinals/People_Detection/people/people_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::People_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::People_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::People_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::People_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::People_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::People_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::people_msgs::People_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18722f4b8db20cc2369740732357847b";
  }

  static const char* value(const ::people_msgs::People_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18722f4b8db20cc2ULL;
  static const uint64_t static_value2 = 0x369740732357847bULL;
};

template<class ContainerAllocator>
struct DataType< ::people_msgs::People_<ContainerAllocator> >
{
  static const char* value()
  {
    return "people_msgs/People";
  }

  static const char* value(const ::people_msgs::People_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::people_msgs::People_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
people_msgs/Person[] people\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: people_msgs/Person\n\
string              name\n\
geometry_msgs/Point position\n\
geometry_msgs/Point velocity\n\
float64             reliability\n\
string[]            tagnames\n\
string[]            tags\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::people_msgs::People_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::people_msgs::People_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.people);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct People_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::people_msgs::People_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::people_msgs::People_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "people[]" << std::endl;
    for (size_t i = 0; i < v.people.size(); ++i)
    {
      s << indent << "  people[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::people_msgs::Person_<ContainerAllocator> >::stream(s, indent + "    ", v.people[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEOPLE_MSGS_MESSAGE_PEOPLE_H
