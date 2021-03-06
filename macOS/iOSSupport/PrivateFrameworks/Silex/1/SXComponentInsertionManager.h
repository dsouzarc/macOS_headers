//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionManager-Protocol.h>

@class NSMutableArray, NSString;
@protocol SXBlueprintAnalyzer, SXComponentInserterManager, SXComponentInsertionConditionEngine, SXUnitConverterFactory;

@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager>
{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXComponentInserterManager> _inserterManager;
    id <SXBlueprintAnalyzer> _blueprintAnalyzer;
    id <SXUnitConverterFactory> _unitConverterFactory;
    NSMutableArray *_cache;
}

@property(readonly, nonatomic) NSMutableArray *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXBlueprintAnalyzer> blueprintAnalyzer; // @synthesize blueprintAnalyzer=_blueprintAnalyzer;
@property(readonly, nonatomic) id <SXComponentInserterManager> inserterManager; // @synthesize inserterManager=_inserterManager;
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine=_conditionEngine;
- (void).cxx_destruct;
- (void)updateDOM:(id)arg1 layoutBlueprint:(id)arg2 insert:(id)arg3 marker:(id)arg4;
- (id)insertForMarker:(id)arg1 inserter:(id)arg2 DOMObjectProvider:(id)arg3 layoutProvider:(id)arg4;
- (id)insertComponentsForBlueprint:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)initWithComponentInserterManager:(id)arg1 conditionEngine:(id)arg2 blueprintAnalyzer:(id)arg3 unitConverterFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

