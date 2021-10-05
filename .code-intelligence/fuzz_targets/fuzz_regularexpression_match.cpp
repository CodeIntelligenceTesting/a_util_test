#include "pcrecpp.h"
#include "a_util/regex.h"
#pragma warning(disable : 4355)
#define DECLARE_ARG_HELPER(arg)                                                                    \


extern "C" int FUZZ(const char *Data, size_t Size) {
  if(Size < 4){
    return 0;
  }
  using a_util::regex::RegularExpression;
  int consumed = 0;
  std::string input(Data, Size);
  
  RegularExpression regularexpression(input);
  regularexpression.match("test", RegularExpression::AT_Start, consumed);

  return 0;
}
