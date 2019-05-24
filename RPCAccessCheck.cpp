//
// Created by a27stude on 20.03.19.
//

#include "RPCAccessCheck.h"

RPCAccessCheck::RPCAccessCheck(std::string lvl, std::shared_ptr<RPCInterface> functorPtr)
{
    accessLevel = lvl;
    ptr = functorPtr;

}

std::map<std::string, std::string> RPCAccessCheck::execute(std::map<std::string, std::string> mapa)
{
    auto it = mapa.find("AccessLevel");
    if(it->second == accessLevel)
    {
        return ptr->execute(mapa);
    }
    else
    {
        throw std::runtime_error("Access denied");
    }
}

