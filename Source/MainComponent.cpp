/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "SectionMetadata.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // Test the Section Metadata
    auto sm = SectionMetadata::builder()
        .title("Foobar")
        .composer("mhc")
        .build();
    assert(sm.title() == "Foobar");
    assert(sm.composer() == "mhc");
    assert(sm.subtitle() == "");
    
    auto sm2 = SectionMetadata::builder(sm).version("1.0").build();
    assert(sm.title() == sm2.title());
    assert(sm.composer() == sm2.composer());
    assert(sm.version() == "");
    assert(sm2.version() == "1.0");
    
    
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
