/*
  ==============================================================================

    SectionMetadata.cpp
    Created: 18 Mar 2018 8:23:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "SectionMetadata.h"

SectionMetadataBuilder &SectionMetadataBuilder::title(const juce::String &title) { 
    section_metadata_.title_ = title;
    return *this;
}

SectionMetadataBuilder &SectionMetadataBuilder::subtitle(const juce::String &subtitle) {
    section_metadata_.subtitle_ = subtitle;
    return *this;
}

SectionMetadataBuilder &SectionMetadataBuilder::composer(const juce::String &composer) { 
    section_metadata_.composer_ = composer;
    return *this;
}

SectionMetadataBuilder &SectionMetadataBuilder::arranger(const juce::String &arranger) { 
    section_metadata_.arranger_ = arranger;
    return *this;
}

SectionMetadataBuilder &SectionMetadataBuilder::version(const juce::String &version) { 
    section_metadata_.version_ = version;
    return *this;
}
SectionMetadataBuilder SectionMetadata::builder() {
    return SectionMetadataBuilder();
}

SectionMetadataBuilder SectionMetadata::builder(SectionMetadata & section_metadata) {
    return SectionMetadataBuilder(section_metadata);
}


SectionMetadataBuilder::SectionMetadataBuilder(SectionMetadata &section_metadata)
: section_metadata_(section_metadata) {
}

SectionMetadata SectionMetadataBuilder::build() { 
    return std::move(section_metadata_);
}
