#ifndef _gg_data_h_
#define _gg_data_h_

// include files

#include "gg/app/data/data_platform.h"

// namespace

namespace gg
{
    // class in charge of define an application data

    class data final : public data_platform
    {
    public:

        // constructors

        data(void) = default;
        ~data(void) = default;
    };
}

#endif // _gg_data_h_
