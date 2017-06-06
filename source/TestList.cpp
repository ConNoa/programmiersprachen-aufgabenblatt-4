#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "List.hpp"


TEST_CASE("Aufgabe 4.2", "[test empty]")
{
		List <float> tl;
		REQUIRE (tl.empty());



}

TEST_CASE("Aufgabe 4.2", "[test size]")
{
		List <float> tl;
		REQUIRE (tl.size()==0);


}



int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
