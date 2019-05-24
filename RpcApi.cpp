//
// Created by a27stude on 20.03.19.
//

#include "RpcApi.h"

void RpcApi::add(std::string name, std::shared_ptr<RPCInterface> functor)
{
    RpcMap.emplace(name, functor);

}

std::map<std::string, std::string> RpcApi::run(std::string name , std::map<std::string, std::string> Parameters) {
    auto it = RpcMap.find(name);
    if(it == RpcMap.end())
    {
        throw std::runtime_error("Not found");
    }
    auto result = it -> second -> execute(Parameters);
    return result;
}
