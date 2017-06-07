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
struct ListConstIterator
{
	friend class List<T>;

		public:
			// not implemented yet
		private:
			ListNode<T>* m_node = nullptr;
};
		
template <typename T>
struct ListIterator
{
	typedef ListIterator<T> Self;
	typedef T value_type;
	typedef T* pointer;
	typedef T& reference;
	typedef ptrdiff_t difference_type;
	typedef std::forward_iterator_tag iterator_category;

	friend class List<T>;

	//Default Konstruktor
	ListIterator():
	m_node(nullptr){}

	ListIterator(ListNode<T>* const&n):
	m_node(n){}


	reference operator*() const
	{
		return(m_node->m_value);
	}

	pointer operator->() const
	{
	return &(m_node->m_value);
		}

	Self& operator++()
	{
		*this = next(); 	
		return *this; 
	}

	Self operator++(int)
	{
		Self tmp = *this;
	    ++(*this);
		return tmp;
	}

	bool operator== (const Self& x) const
	{
		return(m_node == x.m_node);
	}

	bool operator!=(const Self& x) const
	{
		return(m_node != x.m_node);
	}

	Self next() const
	{
		if (m_node)
		{
			return ListIterator(m_node->m_next);
		}
		else
		{
			return ListIterator(nullptr);
		}
	}

		private:
			//The Node the iterator is pointing to
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
//---------------------------------------------------------
	//Copy-Konstruktor

	List<T>(List<T> const& copylist): 
	m_size(0), 
	m_first(nullptr), 
	m_last(nullptr) 
	{
		for (auto x=copylist.begin(); x!=copylist.end(); x++)
		{
			push_back(*x);
		}
	}
//---------------------------------------------------------

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
//---------------------------------------------------------

	void push_front(T const& v)
	{
		if(m_size==0)//Liste ist leer
		{
			ListNode <T>* newfront = new ListNode<T>{v, nullptr, nullptr};
			m_first = newfront;
			m_last = newfront;
		}
		else
		{
			ListNode <T>* newfront = new ListNode<T>{v, nullptr, m_first};
			m_first->m_prev=newfront;
			m_first=newfront;
		}

		m_size++;

	}

	void push_back(T const& v)
	{

		if(m_size==0)//Liste ist leer
		{
			ListNode <T>* newback = new ListNode<T>{v, nullptr, nullptr};
			m_first = newback;
			m_last = newback;
		}
		else
		{
			ListNode <T>* newback = new ListNode<T>{v, m_last, nullptr};
			m_last->m_next=newback;
			m_last=newback;
		}
		m_size++;
	}

	void pop_front()
	{
		if(m_size<1)
		{
			throw std::out_of_range("List is empty, can´t pop");
		}

		if(m_size==1)
		{

			m_first=nullptr;
			m_last=nullptr;
			m_size--;
		}

		if(m_size>1)
		{
			m_first=m_first->m_next;
			m_first->m_prev=nullptr;
			m_size--;
		}


	}

	void pop_back()
	{
		if(m_size<1)
		{
			throw std::out_of_range("List is empty, can´t pop");
		}

		if(m_size==1)
		{

			m_first=nullptr;
			m_last=nullptr;
			m_size--;
		}

		if(m_size>1)
		{
			m_last=m_last->m_prev;
			m_last->m_next=nullptr;
			m_size--;
		}


	}
//---------------------------------------------------------
//--------------Warum so in der Form?----------------------
//---------------------------------------------------------
	
	T const& front() const
  	{
   		return m_first->m_value;
  	}


  	T const& back() const
  	{
    	return m_last->m_value;
  	}


  	T& front()
  	{
    	return m_first->m_value;
  	}


  	T& back()
  	{
    	return m_last->m_value;
	}
//---------------------------------------------------------


	void clear()
  	{
    	while(!empty())
    	{
      		pop_back();
    	}
	}
//---------------------------------------------------------

	iterator end() const
  	{
    	return iterator {};
  	}

  	iterator begin() const
  	{
    	return iterator {m_first}; 
	}

private:
	std::size_t m_size = 0;
	ListNode<T>* m_first = nullptr;
	ListNode<T>* m_last = nullptr;

};
//---------------------------------------------------------

template <typename T>
bool operator == (List<T> const& xs, List<T> const& ys)
{
	auto x_iter = xs.begin();
	auto y_iter = ys.begin();

	if(xs.size() == ys.size())
	{
		for(int i : ys)
		{
			if(*x_iter != *y_iter)
			{
				return false;
			}
			++x_iter;
			++y_iter;

		}
		return true;
	}
	else 
	{
		return false;
	}
}

template<typename T>

bool operator!=(List<T> const& xs, List<T> const& ys)
{
  return !(xs == ys);
}



#endif