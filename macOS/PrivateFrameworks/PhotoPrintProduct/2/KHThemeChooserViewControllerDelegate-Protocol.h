//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHThemeChooserViewController, KHThemeProviderConfig, NSString;

@protocol KHThemeChooserViewControllerDelegate <NSObject>
- (void)themeChooserViewController:(KHThemeChooserViewController *)arg1 choseThemeProvider:(KHThemeProviderConfig *)arg2;

@optional
- (NSString *)themeChooserViewControllerBackButtonTitle;
@end

