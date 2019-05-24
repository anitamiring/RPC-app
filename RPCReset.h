//
// Created by a27stude on 20.03.19.
//

#ifndef DOJO2_RPCRESET_H
#define DOJO2_RPCRESET_H


#include "RPCInterface.h"

class RPCReset : public RPCInterface {

public:
    std::map<std::string, std::string> execute(std::map<std::string, std::string>) override;


};


#endif //DOJO2_RPCRESET_H
