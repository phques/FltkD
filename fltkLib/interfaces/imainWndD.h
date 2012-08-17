// this is the Interface we want to see in D for our window
// cf cppInterface.di

// Copyright 2012 Philippe Quesnel
// Licensed under the Academic Free License version 3.0

// by using a specific 'interface' like this,
// we don't have to guess the layout of the vtable, so the D interface is just as this one

#ifndef _imainwndd_h
#define _imainwndd_h

// must match IMainWindowD in cppInterface.di
class IMainWindowD {
  virtual void show(int argc, char ** argv) = 0;
  virtual void hide() = 0;
  virtual void toto(const char*, const char*, const char*) = 0;
  virtual const char* getDroppedText() = 0;
};

#endif //_imainwndd_h
