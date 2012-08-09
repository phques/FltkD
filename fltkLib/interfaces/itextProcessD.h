#ifndef  _ITextProcessor
#define _ITextProcessor

class ITextProcessorD {
public:
    virtual void setText(const char*);
    virtual void process();
};

#endif
