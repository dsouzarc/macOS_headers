//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallModalDialogController.h"

@class NSTextField;

@interface EXSFilterController : SmallModalDialogController
{
    NSTextField *newName;
}

+ (BOOL)filteringEnabled;
+ (void)setFilteringEnabled:(BOOL)arg1;
+ (id)filterString;
+ (void)setFilterString:(id)arg1;
+ (id)show;
+ (id)nibName;
- (void)click_OK:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)updateUI;

@end

