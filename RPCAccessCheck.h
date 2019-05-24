//
// Created by a27stude on 20.03.19.
//

#ifndef DOJO2_RPCADMIN_H
#define DOJO2_RPCADMIN_H


#include "RPCInterface.h"
#include <memory>

class RPCAccessCheck : public RPCInterface {
private:
    std::string accessLevel;
    std::shared_ptr<RPCInterface> ptr;
public:
    std::map<std::string, std::string> execute(std::map<std::string, std::string>);
    RPCAccessCheck(std::string lvl, std::shared_ptr<RPCInterface> functorPtr);

};


#endif //DOJO2_RPCADMIN_H
