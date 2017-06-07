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
	List<int> list; 
	list.push_front(1); 
	list.push_front(2); 
	list.push_front(3); 
	list.push_front(4); 
	list.clear(); 
	REQUIRE(list.empty());
}

TEST_CASE("should be an empty range after default construction","[iterators]") 
{
	List<int> list;
	auto b = list.begin(); 
	auto e = list.end(); 
	REQUIRE(b == e);
}


TEST_CASE("provide acces to the first element with begin", "[iterators]")
{
	List<int> list; 
	list.push_front(42); 
	REQUIRE(42 == *list.begin());
}


TEST_CASE ( "Aufgabe4.7 "  )
{

	List < int > l1 ;
	l1 . push_front (12);
	l1 . push_front (23);
	l1 . push_front (34);
	l1 . push_front (45);


	List < int > l2 { l1 };

	REQUIRE ( l1 == l2 );
	l2.pop_front();
	REQUIRE(l2.front()==34);
}
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
