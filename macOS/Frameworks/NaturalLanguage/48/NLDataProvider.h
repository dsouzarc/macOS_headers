//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NLModelConfiguration, NSArray, NSDictionary, NSString;

@interface NLDataProvider : NSObject
{
    NLModelConfiguration *_configuration;
    struct __CFStringTokenizer *_tokenizer;
    NSArray *_instances;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
    unsigned long long _numberOfTokens;
    NSString *_recognizedLanguage;
    BOOL _generatedMaps;
    BOOL _performedLanguageRecognition;
}

- (void).cxx_destruct;
@property(readonly) NSString *recognizedLanguage;
- (unsigned long long)numberOfTokens;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (struct __CFStringTokenizer *)tokenizer;
- (void)generateMapsWithModelTrainer:(id)arg1;
- (void)_generateMaps;
- (void)_performLanguageRecognition;
- (void)_generateMapsWithModelTrainer:(id)arg1;
- (id)instanceAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfInstances;
@property(readonly, copy) NLModelConfiguration *configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 dataURL:(id)arg2;

@end

