#include "ctd/URL.h"

#include <catch2/catch_test_macros.hpp>

namespace ctd {

TEST_CASE("URL: Default constructor creates empty URL", "[URL]") {
    static constexpr URL url;
    static_assert(url.str() == "");
}

} // namespace ctd
