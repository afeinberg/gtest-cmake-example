#ifndef AF_GTEST_EXAMPLE_H_
#define AF_GTEST_EXAMPLE_H_

#include <string>

namespace af {

class Example {
  public:

    explicit Example(const char *name);
    virtual ~Example();
    
    std::string Greet() const;

  private:
    const char *name_;
};

} 

#endif // AF_GTEST_EXAMPLE_H_
