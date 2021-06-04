// TestControl.cpp
#include "pch.h"
#include "TestControl.h"
#if __has_include("TestControl.g.cpp")
#include "TestControl.g.cpp"
#endif

namespace winrt::TestComponent::implementation
{
    Microsoft::UI::Xaml::DependencyProperty TestControl::m_labelProperty =
        Microsoft::UI::Xaml::DependencyProperty::Register(
            L"Label",
            winrt::xaml_typename<winrt::hstring>(),
            winrt::xaml_typename<TestComponent::TestControl>(),
            Microsoft::UI::Xaml::PropertyMetadata{ winrt::box_value(L"default label"), Microsoft::UI::Xaml::PropertyChangedCallback{ &TestControl::OnLabelChanged } }
    );

    void TestControl::OnLabelChanged(Microsoft::UI::Xaml::DependencyObject const& d, Microsoft::UI::Xaml::DependencyPropertyChangedEventArgs const& /* e */)
    {
        if (TestComponent::TestControl theControl{ d.try_as<TestComponent::TestControl>() })
        {
            // Call members of the projected type via theControl.

            TestComponent::implementation::TestControl* ptr{ winrt::get_self<TestComponent::implementation::TestControl>(theControl) };
            // Call members of the implementation type via ptr.
        }
    }
}