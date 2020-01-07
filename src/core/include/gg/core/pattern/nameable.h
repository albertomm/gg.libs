#ifndef _gg_nameable_h_
#define _gg_nameable_h_

// include files

#include "gg/core/type/type_trait.h"

// namespace

namespace gg
{
    // class in charge of define a nameable object

    template <typename NAME_TYPE>
    class nameable
    {
    public:

        // type definitions

        typedef NAME_TYPE name_type;

        // static asserts

        GG_STATIC_ASSERT(
            !type::is_pointer<name_type>(),
            "pointer name_type is not allowed");

        // constructors

        nameable(name_type const & name) noexcept
            : m_name(name)
        {
        }

        nameable(name_type && name) noexcept
            : m_name(type::move(name))
        {
        }

        nameable(nameable const & obj) noexcept
            : m_name(obj.m_name)
        {
        }

        nameable(nameable && obj) noexcept
            : m_name(type::move(obj.m_name))
        {
        }

        // accessors

        name_type const & get_name(void) const noexcept
        {
            return m_name;
        }

        void set_name(name_type const & name) noexcept
        {
            m_name = name;
        }

        void set_name(name_type && name) noexcept
        {
            m_name = type::move(name);
        }

        template <typename TYPE>
        void set_name(TYPE && name) noexcept
        {
            m_name = type::forward<TYPE>(name);
        }

        // inquiries

        bool8 is_named(name_type const & name) const noexcept
        {
            return m_name == name;
        }

        template <typename TYPE>
        bool8 is_named(TYPE const & name) const noexcept
        {
            return m_name == name;
        }

    protected:

        // constructors

        ~nameable(void) noexcept = default;

    private:

        // attributes

        name_type m_name;
    };
}

#endif // _gg_nameable_h_
