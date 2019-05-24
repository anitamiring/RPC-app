//
// Created by a27stude on 20.03.19.
//

#ifndef DOJO2_RPCINTERFACE_H
#define DOJO2_RPCINTERFACE_H
#include <map>



class RPCInterface {

public:

    virtual std::map<std::string, std::string> execute(std::map<std::string, std::string>) = 0;
    virtual ~RPCInterface() = default;

};


#endif //DOJO2_RPCINTERFACE_H
