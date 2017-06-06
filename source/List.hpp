#ifndef BUW_LIST_HPP
#define BUW_LIST_HPP

#include <cstddef>

// List.hpp

template <typename T>
struct List;



template <typename T>
struct ListNode
{
	//Default Konstruktor
	ListNode() :
	m_value(),
	m_prev(nullptr),
	m_next(nullptr) {}


	//Konstruktor
	ListNode(T const& v, ListNode* prev, ListNode* next): 
	m_value(v),
	m_prev(prev),
	m_next(next){}


	T m_value;					
	ListNode* m_prev;			//Knoten davor
	ListNode* m_next;			//Knoten danach
};


template <typename T>
struct ListIterator
{
	


	friend class List<T>;
	
	//not implemented yeat


	private:
		ListNode<T>* m_node = nullptr;
};


template <typename T>
struct ListConstIterator
{
	friend class List<T>;

public:
	// not implemented yet
private:
	ListNode<T>* m_node = nullptr;
};


template <typename T>
class List
{
public:
	typedef T value_type;
	typedef T* pointer;
	typedef const T* const_pointer;
	typedef T& reference;
	typedef const T& const_reference;
	typedef ListIterator<T> iterator;
	typedef ListConstIterator <T> const_iterator;

	friend class ListIterator<T>;
	friend class ListConstIterator<T>;

	//not implemented yet

	//Default Konstruktor
	List<T>():
	m_size(0),
	m_first(nullptr),
	m_last(nullptr) {}

	//Leere Liste?
	bool empty() const
	{
		return(m_size==0);
	}


	//Größe der Liste
	std::size_t size() const   
	{
		return(m_size);
	}

private:
	std::size_t m_size = 0;
	ListNode<T>* m_first = nullptr;
	ListNode<T>* m_last = nullptr;

};

#endif