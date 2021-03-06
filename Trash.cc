#include "Trash.h"
#include "Link.h"
//----------------------------------------------------------------------------
Trash::~Trash()
{
	sleep( 1 );
	Empty();
}
//----------------------------------------------------------------------------
void Trash::Empty()
{
	for( int i=0; i<items.size(); i++ )
		delete items[i];
	items.clear();
}
//----------------------------------------------------------------------------
void Trash::Add( Link *l )
{
	l->Hide();
	items.push_back( l );
	Timer::Add( this, 30 );
}
//----------------------------------------------------------------------------
void Trash::Add( vector<Link*> &v )
{
	items = v;
	for( int i=0; i<v.size(); i++ )
		v[i]->Hide();
	v.clear();
	Timer::Add( this, 30 );
}
//----------------------------------------------------------------------------
void Trash::OnTime()
{
	Empty();
}
//----------------------------------------------------------------------------
