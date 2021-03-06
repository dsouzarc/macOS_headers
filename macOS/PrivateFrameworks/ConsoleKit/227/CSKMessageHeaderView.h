//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CSKHeaderView.h>

@class CSKBadgeLabel, CSKExtendedTextField, NSTextField;

@interface CSKMessageHeaderView : CSKHeaderView
{
    CSKExtendedTextField *_processTextField;
    NSTextField *_subsystemTextField;
    NSTextField *_categoryTextField;
    NSTextField *_timeTextField;
    NSTextField *_volatileBadgeLabel;
    CSKBadgeLabel *_typeBadgeLabel;
}

@property(nonatomic) __weak CSKBadgeLabel *typeBadgeLabel; // @synthesize typeBadgeLabel=_typeBadgeLabel;
@property(nonatomic) __weak NSTextField *volatileBadgeLabel; // @synthesize volatileBadgeLabel=_volatileBadgeLabel;
@property(nonatomic) __weak NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(nonatomic) __weak NSTextField *categoryTextField; // @synthesize categoryTextField=_categoryTextField;
@property(nonatomic) __weak NSTextField *subsystemTextField; // @synthesize subsystemTextField=_subsystemTextField;
@property(nonatomic) __weak CSKExtendedTextField *processTextField; // @synthesize processTextField=_processTextField;
- (void).cxx_destruct;
- (void)updateViewWithMessage:(id)arg1;

@end

