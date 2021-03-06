#include "MaxHeap.h"

#include <algorithm>

using namespace std;


void MaxHeap::push( pair<double, size_t>& e )
{
   m_vector.push_back( e );
   push_heap( m_vector.begin(), m_vector.end() );
}

pair<double, size_t> MaxHeap::pop()
{
   pop_heap( m_vector.begin(), m_vector.end() );
   pair<double, size_t> e = m_vector.back();
   m_vector.pop_back();
   return e;
}

bool MaxHeap::empty()
{
   return m_vector.empty();
}

size_t MaxHeap::size()
{
   return m_vector.size();
}

