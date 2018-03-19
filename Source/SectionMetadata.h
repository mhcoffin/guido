/*
  ==============================================================================

    SectionMetadata.h
    Created: 18 Mar 2018 8:23:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class SectionMetadataBuilder;

class SectionMetadata {
public:
    String title() const {return title_;}
    String subtitle() const { return subtitle_; }
    String composer() const { return composer_; }
    String arranger() const { return arranger_; }
    String version() const { return version_; }
    
    static SectionMetadataBuilder builder();
    static SectionMetadataBuilder builder(SectionMetadata&);
    
    friend class SectionMetadataBuilder;
private:
    String title_;
    String subtitle_;
    String composer_;
    String arranger_;
    String version_;
};

class SectionMetadataBuilder {
public:
    SectionMetadataBuilder() = default;
    SectionMetadataBuilder(SectionMetadata& section_metadata);
    
    SectionMetadataBuilder& title(const String& title);
    SectionMetadataBuilder& subtitle(const String& subtitle);
    SectionMetadataBuilder& composer(const String& composer);
    SectionMetadataBuilder& arranger(const String& arranger);
    SectionMetadataBuilder& version(const String& version);
    SectionMetadata build();
    
private:
    SectionMetadata section_metadata_;
};


