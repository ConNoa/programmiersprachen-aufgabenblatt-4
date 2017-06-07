#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "List.hpp"


TEST_CASE("Aufgabe 4.2 [test empty test size]")
{
		List <float> tl;
		REQUIRE (tl.empty());
		REQUIRE (tl.size()==0);
}


TEST_CASE("Aufgabe 4.3 [push front push back pop front]")
{
		List <float> tl;
		REQUIRE (tl.size()==0);
		tl.push_front(42);
		tl.push_front(72);
		tl.push_front(42);
		REQUIRE (tl.size()==3);
		tl.push_back(24);
		REQUIRE (tl.size()==4);
		tl.pop_front();
		REQUIRE (tl.size()==3);
		tl.pop_back();
		REQUIRE (tl.size()==2);
		REQUIRE(72 == tl.front());
		REQUIRE(42 == tl.back());

}

TEST_CASE("should be empty after clearing", "[modifiers]")
{
	List<int> tl; 
	tl.push_front(1); 
	tl.push_front(2); 
	tl.push_front(3); 
	tl.push_front(4); 
	tl.clear(); 
	REQUIRE(tl.empty());
}

TEST_CASE("should be an empty range after default construction","[iterators]") 
{
	List<int> tl;
	auto b = tl.begin(); 
	auto e = tl.end(); 
	REQUIRE(b == e);
}


TEST_CASE("provide acces to the first element with begin", "[iterators]")
{
	List<int> tl; 
	tl.push_front(42); 
	REQUIRE(42 == *tl.begin());
}


TEST_CASE ( "4.7 TestCases "  )
{

	List < int > tl1 ;
	tl1 . push_front (12);
	tl1 . push_front (23);
	tl1 . push_front (34);
	tl1 . push_front (45);


	List < int > tl2 { tl1 };

	REQUIRE ( tl1 == tl2 );
	tl2.pop_front();
	REQUIRE(tl2.front()==34);
}

TEST_CASE("copy constructor", "[constructor]") 
{
	List<int> list;
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);

	List<int> list2{list};
	
	REQUIRE(list == list2);
}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
