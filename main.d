module main;

import std.stdio;
import std.string;
import std.c.string;
import std.utf;
import std.conv;

import fltkLib.interfaces.cppInterface;


// code that will be called from c++/fltk gui
class TextProcessor : ITextProcessor  {
    string text;

    extern (C++) void setText(const char* ptext){
        text = to!string(ptext);
    }

    extern (C++) void process() {
        writeln("D textprocess: ", text);
    }

}


int main(string[] args)
{
    writefln("Hello World\n");

    auto textProcessor = new TextProcessor;
    auto mainWindow = createMainWindow(textProcessor);

    string ss = "bonjour";
    mainWindow.toto("allo".toStringz, // this toStringz not required apparently !
                    "allo pas stringz",
                    ss.toStringz);

    // convert 'args' to an argv array to pass to window.show(argc, char** argv)
    char*[] argv;
    foreach (arg; args)
        argv ~=  toUTFz!(char*)(arg);

    mainWindow.show(argv.length, argv.ptr);

    fl_run();

    // call C++ method that returns the text from dragndrop
    const char* ptext = mainWindow.getDroppedText();
    writeln("getDroppedText() : ", to!string(ptext));

    // will delete mainWindow in C++
    freeMainWindow(mainWindow);

	return 0;
}
