#include "example.h"

namespace af {

Example::Example(const char *name)
        :name_(name) {
}

Example::~Example() {
}

std::string Example::Greet() const {
    std::string ret;
    ret.append("Hello, ");
    ret.append(name_);
    ret.push_back('!');
    return ret;
} // namespace

}
