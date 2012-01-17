#ifndef MISSGLOBLE_H
#define MISSGLOBLE_H

#include <vector>
#include <wx/string.h>

namespace MissGloble
{
    struct MissDir
    {
        std::vector<wxString> vecFiles;
        wxString              strDirPath;
    };

    //extern

};

#endif // MISSGLOBLE_H
