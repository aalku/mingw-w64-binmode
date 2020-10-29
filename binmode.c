if (defined _WIN32 || defined WIN32) && ! defined CYGWIN

include <fcntl.h>
int _fmode = _O_BINARY;

endif
