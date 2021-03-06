//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TOpenWithMenuFactory.h"

@interface TOpenWithPopupMenuFactory : TOpenWithMenuFactory
{
    struct TNSRef<NSURL, void> _popupCurrentAppURL;
    struct TFENode _popupCurrentAppNode;
    _Bool _hasPopupCurrentAppNode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)openWithMenuOtherPanelPrompt;
- (_Bool)getCurrentAppNode:(const function_0beffb83 *)arg1;
- (void)addNotApplicableMenuItem:(id)arg1;
- (void)_buildOpenWithMenuOnMainThread:(id)arg1 currentAppNode:(const struct TFENode *)arg2 defaultAppNode:(const struct TFENode *)arg3 openerAppsNodes:(const struct TFENodeVector *)arg4;
- (void)buildOpenWithMenu:(id)arg1;
- (void)preflightOpenWithPopupButton:(id)arg1;

@end

