//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>
#import <SafariShared/WBSParsecSearchResult-Protocol.h>

@class MKMapItem, NSArray, NSString, NSURL, SFSearchResult, WBSParsecActionButton, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSParsecSearchResult, WBSCompletionListItem>
{
    WBSParsecImageRepresentation *_icon;
    WBSParsecImageRepresentation *_completionIcon;
    BOOL _topHit;
    SFSearchResult *_sfSearchResult;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_identifier;
    NSString *_feedbackIdentifier;
    NSString *_urlString;
    NSString *_sectionHeader;
    NSString *_completion;
    NSString *_query;
    unsigned long long _legacyType;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSURL *_appPunchoutURL;
    NSString *_mediaKind;
    NSString *_referrerForLoadingResult;
    WBSParsecActionButton *_actionButton;
    MKMapItem *_mapItem;
    NSArray *_additionalMapItems;
    NSString *_alternateSectionHeader;
    long long _placementHint;
    unsigned long long _displayOptions;
    SFSearchResult *_sfSearchResultValue;
    NSString *_sectionBundleIdentifier;
}

+ (BOOL)_validateAndReturnPlacementHintValueForString:(id)arg1 returnValue:(long long *)arg2;
+ (Class)_resultClassForDictionary:(id)arg1;
+ (id)resultWithDictionary:(id)arg1;
+ (id)_specializedSchema;
+ (id)schema;
@property(copy, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(retain, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
@property(readonly, nonatomic) WBSParsecImageRepresentation *completionIcon; // @synthesize completionIcon=_completionIcon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) unsigned long long displayOptions; // @synthesize displayOptions=_displayOptions;
@property(readonly, nonatomic) long long placementHint; // @synthesize placementHint=_placementHint;
@property(readonly, copy, nonatomic) NSString *alternateSectionHeader; // @synthesize alternateSectionHeader=_alternateSectionHeader;
@property(readonly, nonatomic) NSArray *additionalMapItems; // @synthesize additionalMapItems=_additionalMapItems;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) WBSParsecActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, copy, nonatomic) NSString *referrerForLoadingResult; // @synthesize referrerForLoadingResult=_referrerForLoadingResult;
@property(readonly, copy, nonatomic) NSString *mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, nonatomic) NSURL *appPunchoutURL; // @synthesize appPunchoutURL=_appPunchoutURL;
@property(readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) unsigned long long legacyType; // @synthesize legacyType=_legacyType;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier; // @synthesize feedbackIdentifier=_feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (BOOL)canBecomeTopHitForQuery:(id)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
- (id)completionIconWithSession:(id)arg1;
- (id)iconWithSession:(id)arg1;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end

