#ifndef SINGLETON_H
#define SINGLETON_H

template<typename T>
class Singleton {
 public:
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;

  Singleton(Singleton&&) = delete;
  Singleton& operator=(Singleton&&) = delete;

 protected:
  Singleton() = default;

 public:
  static T& instance() {
    static T _instance;
    return _instance;
  }
};

#endif  // SINGLETON_H
