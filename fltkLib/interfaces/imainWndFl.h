// imaindFl.h
// interface for c++ code outside of the window (eg: DnDBox class)

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0


#ifndef _imainwndfl_h
#define _imainwndfl_h

class ITextProcessorD;

// interface for c++ code outside of the window (eg: DnDBox class)
class IMainWindowFl
{
public:
    virtual ITextProcessorD* getTextProcessor() = 0;
};


#endif //_imainwndfl_h
