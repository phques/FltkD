// dndBox.h, drag and drop Fl_Box example

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0


#ifndef DNDBOX_H_INCLUDED
#define DNDBOX_H_INCLUDED

#include <FL/Fl_Box.H>
#include <string>
#include "interfaces/imainWndFl.h"
#include "interfaces/itextProcessD.h"

class DndBox : public Fl_Box
{
public:
    std::string droppedText;

    // Ctor
    DndBox(int x,int y,int w,int h, const char* title) : Fl_Box(x,y,w,h, title)
    {
    }
    // Receiver event handler
    int handle(int event)
    {
        int ret = Fl_Box::handle(event);
        switch ( event )
        {
        case FL_DND_ENTER:          // return(1) for these events to 'accept' dnd
        case FL_DND_DRAG:
        case FL_DND_RELEASE:
            ret = 1;
            break;
        case FL_PASTE:              // handle actual drop (paste) operation
            droppedText = Fl::event_text();
//            label(Fl::event_text());
            fprintf(stderr, "FL_PASTE '%s'\n", Fl::event_text());

            // get ptr to top window
            // & ask it for the ITextProcessorD
            IMainWindowFl* imainWnd = static_cast<IMainWindowFl*>(user_data());
            ITextProcessorD* textProcessor = imainWnd->getTextProcessor();

            // call ITextProcessorD
            textProcessor->setText(droppedText.c_str());
            textProcessor->process();

            ret = 1;
            break;
        }
        return(ret);
    }
};

#endif // DNDBOX_H_INCLUDED

