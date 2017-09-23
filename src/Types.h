#include <string>
#include <memory>

using UInt = unsigned int;
using String = std::string;


template<typename T, typename Deleter = std::default_deleter<T>> using UniquePtr = std::unique_ptr<T, Deleter>;
template<typename T, typename Deleter = std::default_deleter<T>, typename ... Args> UniquePtr<T, Deleter> constexpr CreateUniquePtr(Args&&... args){
  return UniquePtr<T, Deleter>(new T(args...));
}

template<typename T> using SharedPtr = std::shared_ptr<T>;
template<typename T, typename ... Args> SharedPtr<T> constexpr CreateSharedPtr(Args&&... args){
  return std::make_shared<T>(args...);
}
