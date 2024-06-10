// Generated by gencpp from file zero/heightRequest.msg
// DO NOT EDIT!


#ifndef ZERO_MESSAGE_HEIGHTREQUEST_H
#define ZERO_MESSAGE_HEIGHTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zero
{
template <class ContainerAllocator>
struct heightRequest_
{
  typedef heightRequest_<ContainerAllocator> Type;

  heightRequest_()
    : a(0)
    , b(0)  {
    }
  heightRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int32_t _a_type;
  _a_type a;

   typedef int32_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::zero::heightRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zero::heightRequest_<ContainerAllocator> const> ConstPtr;

}; // struct heightRequest_

typedef ::zero::heightRequest_<std::allocator<void> > heightRequest;

typedef boost::shared_ptr< ::zero::heightRequest > heightRequestPtr;
typedef boost::shared_ptr< ::zero::heightRequest const> heightRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zero::heightRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zero::heightRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zero::heightRequest_<ContainerAllocator1> & lhs, const ::zero::heightRequest_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zero::heightRequest_<ContainerAllocator1> & lhs, const ::zero::heightRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zero

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::zero::heightRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zero::heightRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zero::heightRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zero::heightRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zero::heightRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zero::heightRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zero::heightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef8322123148e475e3e93a1f609b2f70";
  }

  static const char* value(const ::zero::heightRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef8322123148e475ULL;
  static const uint64_t static_value2 = 0xe3e93a1f609b2f70ULL;
};

template<class ContainerAllocator>
struct DataType< ::zero::heightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zero/heightRequest";
  }

  static const char* value(const ::zero::heightRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zero::heightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 a\n"
"int32 b\n"
;
  }

  static const char* value(const ::zero::heightRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zero::heightRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct heightRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zero::heightRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zero::heightRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZERO_MESSAGE_HEIGHTREQUEST_H