
#ifndef _imainwndfl_h
#define _imainwndfl_h

class ITextProcessor;

// interface for c++ code outside of the window (eg: DnDBox class)
class IMainWindowFl
{
public:
    virtual ITextProcessor* getTextProcessor() = 0;
};


#endif //_imainwndfl_h
