//
// Created by a27stude on 20.03.19.
//

#include <gtest/gtest.h>
#include "RpcApi.h"
#include "RPCInterfaceMock.h"
#include "RPCAccessCheck.h"

class Test_RPCAccessCheck : public testing::Test
{
public:
    Test_RPCAccessCheck() : mock(std::make_shared<RPCInterfaceMock>()), uut("Admin",mock) {}
    std::shared_ptr<RPCInterfaceMock> mock;
    RPCAccessCheck uut;
    std::map<std::string, std::string> parametersMap{{"param1","param2"},{"AccessLevel","Admin"}};
    std::map<std::string, std::string> returnMap{{"return1", "return2"}};

};


TEST_F(Test_RPCAccessCheck, call_method2_OK)
{

    EXPECT_CALL(*mock, execute(parametersMap)).WillOnce(testing::Return(returnMap));
    auto res = uut.execute(parametersMap);
    EXPECT_EQ(res, returnMap);
}





