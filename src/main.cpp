#include <boost/fiber/fiber.hpp>

#include <iostream>

auto main() -> int
{
    const auto print = [](){
        std::cout << "fiber" << std::endl;
    };

    auto f = boost::fibers::fiber{print};
    f.join();

    return 0;
}