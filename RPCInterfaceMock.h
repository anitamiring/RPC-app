//
// Created by a27stude on 20.03.19.
//

#ifndef DOJO2_RPCINTERFACEMOCK_H
#define DOJO2_RPCINTERFACEMOCK_H

#include <gmock/gmock.h>
#include "RPCInterface.h"

class RPCInterfaceMock : public  RPCInterface {
public:
    MOCK_METHOD1(execute, std::map<std::string, std::string>(std::map<std::string, std::string>));
};

#endif //DOJO2_RPCINTERFACEMOCK_H
