/*
*      Copyright 2016 Riccardo Melioli. All Rights Reserved.
*/
#define CATCH_CONFIG_RUNNER
//#include "src/richkware.h"
#include "include/catch.hpp"

int main() {
    const char *appName = "Richk";
    const char *defaultEncryptionKey = "richktest"; // pre-shared key with RMS, to enable encryption before receiving a server-side generated key
    const char *serverAddress = "192.168.99.100"; // Richkware-Manager-Server IP address
    const char *port = "8080"; // Richkware-Manager-Server TCP port
    const char *associatedUser = "richk@richk.me"; // account in RMS which is linked to

    // with RichkwareManagerServer
    //Richkware richkware(appName, defaultEncryptionKey, serverAddress, port, associatedUser);
    // without RichkwareManagerServer
    //Richkware richkware(appName, defaultEncryptionKey);
    //int result = Catch::Session().run( 0, {"",""} );

    std::cout << "test" ;
    Sleep(5000);
    return 0;

}

