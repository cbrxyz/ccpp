#pragma once

#include <string>
#include <string_view>

namespace ctd {

class URL {
    std::string url_;
public:
             constexpr URL()                     : url_("")  {}
    explicit constexpr URL(std::string_view url) : url_(url) {}

    [[nodiscard]] constexpr std::string str() const {
        return url_;
    };
};

} // namespace ctd
