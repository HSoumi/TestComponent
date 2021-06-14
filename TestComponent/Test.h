#pragma once
#include "Test.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.


namespace winrt::TestComponent::implementation
{
    struct Test : TestT<Test>
    {
        Test() = default;
        double add(double number1, double number2);
        
    };
}

namespace winrt::TestComponent::factory_implementation
{
    struct Test : TestT<Test, implementation::Test>
    {
    };
}
