#ifndef  _ITextProcessor
#define _ITextProcessor

class ITextProcessor {
public:
    virtual void setText(const char*);
    virtual void process();
};

#endif
