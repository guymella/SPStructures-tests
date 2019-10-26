#include "UnitTest++/src/UnitTest++.h"
#include "Structures/Block.h"
            
TEST(FailSpectacularly)

{

	CHECK(false);

}

int main(void) {
	Block a;
	//return 0;
	return UnitTest::RunAllTests();
}