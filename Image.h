#ifndef __IMAGE_H
#define __IMAGE_H
//-----------------------------------------------------------------------------
#include "Window.h"
//-----------------------------------------------------------------------------
class Image: public WinControl {
private:
	bool Glowing;
	bool FreeAlpha;

	uchar *rgb;
	uchar *alpha[2];
	ImlibImage *source;

public:
	Image( char *f );
	virtual ~Image();

	void Draw();
	void SetGlowing( bool g );
	void SetSource( char *f );

private:
	int Load( char *f );
	void FreeBuffer();
};
//-----------------------------------------------------------------------------
#endif
