#ifndef _gg_type_h_
#define _gg_type_h_

// include files

#include <cstddef>

// namespace

namespace gg
{
    // namespace in charge of define type utilities

    namespace type
    {
        // boolean types

        typedef bool                bool8;

        // integer types

        typedef signed char         int8;
        typedef unsigned char       uint8;
        typedef signed short int    int16;
        typedef unsigned short int  uint16;
        typedef signed int          int32;
        typedef unsigned int        uint32;
        typedef signed long long    int64;
        typedef unsigned long long  uint64;

        // float types

        typedef float               float32;
        typedef double              float64;

        // character types

        typedef char                char8;
        typedef unsigned char       uchar8;
        typedef unsigned short      char16;
        typedef unsigned short      uchar16;
        typedef unsigned int        char32;
        typedef unsigned int        uchar32;

        // size types

        typedef uint8               byte;
        typedef std::ptrdiff_t      diff_type;
        typedef std::size_t         size_type;
    }
}

// core fundamental types

using gg::type::bool8;

using gg::type::int8;
using gg::type::uint8;
using gg::type::int16;
using gg::type::uint16;
using gg::type::int32;
using gg::type::uint32;
using gg::type::int64;
using gg::type::uint64;

using gg::type::float32;
using gg::type::float64;

using gg::type::char8;
using gg::type::uchar8;
using gg::type::char16;
using gg::type::uchar16;
using gg::type::char32;
using gg::type::uchar32;

using gg::type::byte;
using gg::type::diff_type;
using gg::type::size_type;

#endif // _gg_type_h_
