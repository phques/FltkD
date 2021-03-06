// mainWndFlImpl.cpp
// implements virtual methods of MainWindowFl declared in th Fluid file

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0

#include "fluid/mainWndFl.h"


void MainWindowFl::toto(const char* p1, const char* p2, const char* p3)
{
    printf("MainWindow::toto, %s, %s, %s\n", p1, p2, p3);
}

const char* MainWindowFl::getDroppedText()
{
    return dndBox->droppedText.c_str();
}

ITextProcessorD* MainWindowFl::getTextProcessor()
{
    return textProcessor;
}
