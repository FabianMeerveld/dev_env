#pragma once
#include <iostream>
#include <string>

// Logt een bericht als ENABLE_LOGGING is gedefinieerd.
#ifdef ENABLE_LOGGING
    #define log(message) std::cout << message << std::endl;
#else
    #define log(message) // Geen logging in release build
#endif
