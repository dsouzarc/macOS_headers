//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AceObject, NSUUID, NSViewController<SiriUIViewController>;

@interface SiriUITranscriptItem : NSObject
{
    BOOL _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    NSViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    struct CGRect _previousFrame;
}

+ (id)transcriptItemWithAceObject:(id)arg1;
@property(nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(nonatomic) BOOL snippetViewControllerHasBeenUnloaded; // @synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(retain, nonatomic) NSViewController<SiriUIViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSUUID *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAceObject:(id)arg1;

@end

