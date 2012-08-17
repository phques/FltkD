// main.cpp,
// implements some C++ functions accessed by D

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include "fluid/mainWndFl.h"
/*
int main (int argc, char ** argv)
{
    MainWindow* window = new MainWindow();
    window->show(argc, argv);
    return(Fl::run());
}
*/

IMainWindowD* createMainWindow(ITextProcessorD* processor)
{
    return new MainWindowFl(processor);
}

void freeMainWindow(IMainWindowD* iw)
{
    // carefull ! delete IMainWindowD won't do the job ! (no DTOR in the interface)
    MainWindowFl* w = dynamic_cast<MainWindowFl*>(iw);
    delete w;
}

void fl_run()
{
    Fl::run();
}
