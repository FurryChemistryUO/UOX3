// new books readonly -> morex  999
// new books writeable -> morex 666
// old books from misc.scp, readonly: neither type 666 nor 999, section# = more-value
// of course ALL books need a type of 11
#ifndef __books_h
#define __books_h

namespace UOX
{

class cBooks
{
public:
	void CreateBook( const std::string fileName, CChar *mChar, CItem *mBook ); // "formats and creates a new bok file"	

	void OpenPreDefBook( CSocket *s, CItem *i ); // opens old-readonly books, takes data from misc.scp
	void OpenBook( CSocket *s, CItem *i, bool isWriteable ); // opens new books
	void ReadPreDefBook( CSocket *mSock, CItem *mBook, UI16 pageNum ); // reads books from misc.scp, readonly = old books
	void DeleteBook( CItem *id ); // deletes bok-file.
};

extern cBooks *Books;

}

#endif
