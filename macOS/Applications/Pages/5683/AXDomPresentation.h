//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AXValidatingElement.h"

#import "AXPresentation-Protocol.h"

@interface AXDomPresentation : AXValidatingElement <AXPresentation>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)validate;
- (id)axGetVersion;
- (void)axSetAutoPlay:(BOOL)arg1;
- (BOOL)axAutoPlay;
- (void)axSetSelfContained:(BOOL)arg1;
- (BOOL)axIsSelfContained;
- (void)axUpdateUiState:(id)arg1;
- (id)axCreateUiState;
- (id)axGetUiState;
- (id)axGetTheme;
- (id)axGetSlideList;
- (void)initializeNewElement;

@end

