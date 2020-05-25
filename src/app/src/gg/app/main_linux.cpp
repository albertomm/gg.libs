#if defined(GG_LINUX)
//==============================================================================

#include "gg/app/data/data.h"
#include "gg/app/runtime/runtime.h"
#include "gg/core/string/type/string_ref.h"

//==============================================================================

int main(int argc, char const **argv)
{
    gg::app::data data;

    // populate data

    for (int i = 0; i < argc; ++i)
    {
        data.add_argument(gg::string_ref(argv[i]));
    }

    // run main

    return gg::runtime::main(data);
}

//==============================================================================
#endif
//==============================================================================
