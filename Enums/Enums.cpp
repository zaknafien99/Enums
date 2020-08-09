#include "pch.h"

using namespace System;
// The Weekday enum definition
public enum class WeekDay
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main(array<System::String ^> ^args)
{
    // Create a WeekDay
    WeekDay w = WeekDay::Monday;

    Console::WriteLine("Value of w is {0}", (int)w);

    // Swithc on the weekday
    switch (w)
    {
    case WeekDay::Monday:
        Console::WriteLine("It's a Monday!");
        break;
    case WeekDay::Tuesday:
        Console::WriteLine("It's a Tuesday!");
        break;
    case WeekDay::Wednesday:
        Console::WriteLine("It's a Wednesday!");
        break;
    default:
        Console::WriteLine("it's some other day....");
    }
    return 0;
}
