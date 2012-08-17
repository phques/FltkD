// itextProcessD.h
// the 'interface' for calling the D code

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0

#ifndef  _ITextProcessor
#define _ITextProcessor

class ITextProcessorD {
public:
    virtual void setText(const char*);
    virtual void process();
};

#endif
