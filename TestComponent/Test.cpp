#include "pch.h"
#include "Test.h"
#include "Test.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.


namespace winrt::TestComponent::implementation
{
    double Test::add(long int number1, double number2)
    {
        return number1 + number1;
    }
}
