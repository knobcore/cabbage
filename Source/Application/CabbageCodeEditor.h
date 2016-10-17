/*
  ==============================================================================

    CabbageCodeEditor.h
    Created: 16 Oct 2016 2:59:39pm
    Author:  rory

  ==============================================================================
*/

#ifndef CABBAGECODEEDITOR_H_INCLUDED
#define CABBAGECODEEDITOR_H_INCLUDED

#include "CabbageIds.h"
#include "CsoundTokeniser.h"

class CabbageCodeEditorComponent : public CodeEditorComponent
{
public:

    CodeDocument::Position positionInCode;
    CabbageCodeEditorComponent(CodeDocument &document, CodeTokeniser *codeTokeniser);
    ~CabbageCodeEditorComponent() {};

};



#endif  // CABBAGECODEEDITOR_H_INCLUDED
