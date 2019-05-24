//
// Created by a27stude on 20.03.19.
//

#ifndef DOJO2_RPCAPI_H
#define DOJO2_RPCAPI_H

#include <map>
#include <functional>
#include <memory>
#include "RPCInterface.h"

class RpcApi {
public:
    void add (std::string, std::shared_ptr<RPCInterface>);
    std::map<std::string, std::string> run (std::string, std::map<std::string,std::string>);


private:
    std::map<std::string, std::shared_ptr<RPCInterface>> RpcMap;


};


#endif //DOJO2_RPCAPI_H
