#include <algorithm>
#include "a_util/filesystem.h"
#ifdef WIN32
#else
#endif
#pragma warning(disable : 4355)


extern "C" int FUZZ(const char *Data, size_t Size) {
  std::string input(Data, Size);
  a_util::filesystem::Path path(input);
  path.makeCanonical();
  path.toString(a_util::filesystem::Path::PS_ForwardSlash);
  return 0;
}
