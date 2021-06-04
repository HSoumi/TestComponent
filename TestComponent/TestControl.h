// TestControl.h
#pragma once
#include "TestControl.g.h"

namespace winrt::TestComponent::implementation
{
    struct TestControl : TestControlT<TestControl>
    {
        TestControl() { DefaultStyleKey(winrt::box_value(L"TestComponent.TestControl")); }

        winrt::hstring Label()
        {
            return winrt::unbox_value<winrt::hstring>(GetValue(m_labelProperty));
        }

        void Label(winrt::hstring const& value)
        {
            SetValue(m_labelProperty, winrt::box_value(value));
        }

        static Microsoft::UI::Xaml::DependencyProperty LabelProperty() { return m_labelProperty; }

        static void OnLabelChanged(Microsoft::UI::Xaml::DependencyObject const&, Microsoft::UI::Xaml::DependencyPropertyChangedEventArgs const&);

    private:
        static Microsoft::UI::Xaml::DependencyProperty m_labelProperty;
    };
}
namespace winrt::TestComponent::factory_implementation
{
    struct TestControl : TestControlT<TestControl, implementation::TestControl>
    {
    };
}