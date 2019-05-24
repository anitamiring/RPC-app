//
// Created by a27stude on 20.03.19.
//
#include <gtest/gtest.h>
#include "RpcApi.h"
#include "RPCInterfaceMock.h"

class Test_RPCAccessCheck : public testing::Test
{
public:
    Test_RPCAccessCheck() : mock(std::make_shared<RPCInterfaceMock>()) {}

    RpcApi uut;
    std::map<std::string, std::string> parametersMap{{"param1","param2"}};
    std::map<std::string, std::string> returnMap{{"return1", "return2"}};
    std::shared_ptr<RPCInterfaceMock> mock;
};


TEST_F(Test_RPCAccessCheck, call_method_OK) {

    uut.add("update", mock);
    EXPECT_CALL(*mock, execute(parametersMap)).WillOnce(testing::Return(returnMap));
    auto res = uut.run("update", parametersMap);
    EXPECT_EQ(res, returnMap);
}

TEST_F(Test_RPCAccessCheck, call_unknown_method_OK){
    ASSERT_THROW(uut.run("updrate", parametersMap), std::runtime_error);
}



